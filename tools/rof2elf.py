"""Sysrof to ELF converter from decomp.me compilers (SHC object files)."""
import argparse
import struct
from dataclasses import dataclass, field
from enum import IntEnum, IntFlag
from io import BytesIO
from pathlib import Path

NAME_MAP = {
    "P": ".text",
    "C": ".rodata",
    "B": ".bss",
    "D": ".data",
}

def main() -> None:
    args = parse_args()
    make_elf(args.input, args.output, args.isa)
    print("Done!")


def make_elf(in_path: Path, out_path: Path, isa: "EhdrFlags"):
    rof = Sysrof.from_path(in_path)

    elf = ElfBuilder(rof.endian, isa)

    elf.comment = "Rof2Elf\x00"
    elf.comment += f"Source Name: {rof.name}\x00"
    elf.comment += f"Source Tool: {rof.tool}\x00"
    elf.comment += f"Source Date: {rof.date}\x00"

    sym = elf.Symbol(
        rof.name + ".c",
        st_bind=SymBind.LOCAL,
        st_type=SymType.FILE,
        st_shndx=0xfff1 # ABS
    )
    elf.add_symbol(sym)

    # Build sections
    target_sections: list[ElfBuilder.Shdr] = list()
    for s in rof.sections:
        sec = elf.Shdr(
            NAME_MAP.get(s.name, s.name), 
            data=s.content, 
            sh_type=SectionType.PROGBITS, 
            sh_flags=SectionFlags.ALLOC, 
            sh_align=s.align
        )

        if sec.name == ".text":
            sec.sh_flags |= SectionFlags.EXECINSTR
        elif sec.name == ".data":
            sec.sh_flags |= SectionFlags.WRITE
        elif sec.name == ".bss":
            sec.sh_type = SectionType.NOBITS
            sec.sh_flags |= SectionFlags.WRITE
            sec.sh_size = s.lenght

        elf.add_section(sec)
        
        if len(s.relocs) > 0:
            elf.add_reloc_section(sec, True)

        target_sections.append(sec)
    
    # Build symbols, relocs only point to extdefs
    target_syms = list()
    for esym in rof.ext_syms:
        sym = elf.Symbol(
            esym.name,
            st_bind=SymBind.GLOBAL,
            st_type=esym.get_elf_type()
        )
        elf.add_symbol(sym)
        target_syms.append(sym)
    
    for lsym in rof.loc_syms:
        sym = elf.Symbol(
            lsym.name,
            st_value=lsym.address,
            st_bind=SymBind.GLOBAL,
            st_type=lsym.get_elf_type(),
            section=target_sections[lsym.section]
        )
        elf.add_symbol(sym)

    # relocations
    for i, s in enumerate(rof.sections):
        for r in s.relocs:
            if r.rtype == 2:
            # ext_ref
                symbol = target_syms[r.value]

            elif r.rtype == 0:
            # section
                symbol = target_sections[r.value].symbol
            else:
                raise ValueError
            
            reloc = elf.Reloc(
                r_type=RelType.SH_DIR32,
                r_offset=r.address,
                symbol=symbol
            )

            elf.add_reloc(target_sections[i], reloc)
    
    if len(rof.src_files) != 0:
        build_dwarf(elf, rof)

    with out_path.open("wb") as f:
        f.write(elf.build())


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Sysrof to Elf converter tool."
    )
    parser.add_argument("input", type=Path, help="Input file path")
    parser.add_argument("output", type=Path, help="Output file path")
    parser.add_argument(
        "--isa",
        type=EhdrFlags.from_string,
        choices=list(ISA_ALIASES.values()),
        default=EhdrFlags.SH_ANY,
        help=f"Instruction set architecture (choices: {', '.join(ISA_ALIASES.keys())})",
    )
    return parser.parse_args()

class Endian(IntEnum):
    LITTLE = 1
    BIG = 2

    def get_format(self) -> str:
        if self == Endian.BIG:
            return ">"
        else:
            return "<"

# SYSROF stuff
class BlockType(IntEnum):
    COMPLETENESS_SUBSETTING = 0
    HEADER_INFO = 4
    HEADER_SUB_INFO = 5
    UNIT_INFO = 6
    UNIT_SUB_INFO = 7
    SECTION_INFO = 8
    SECTION_SUB_INFO = 9
    EXT_REF_INFO = 0xC
    EXT_REF_SUB_INFO = 0xD
    EXT_DEF_INFO = 0x14
    SECTION_HEADER_INFO = 0x1A
    OBJECT_INFO = 0x1C
    RELOC_INFO = 0x20
    DEBUG_UNIT_INFO = 0x30
    DEBUG_UNIT_SUB_INFO = 0x40
    PROGRAM_STRUCT_INFO = 0x32
    SYM_INFO = 0x34
    TYPE_INFO = 0x36
    BASIC_TYPE_INFO = 0x44
    STRUCT_INFO = 0x4C
    ARRAY_INFO = 0x4E
    POINTER_INFO = 0x50
    FUNC_PARAM_INFO = 0x48
    DEN_INFO = 0x4A
    LINE_INFO = 0x38
    DSO_INFO = 0x3A
    TRAILER_INFO = 0x7F

class RofRelType(IntEnum):
    EXTDEF = 0
    SECTION = 1

@dataclass
class Sysrof:
    @dataclass
    class Block:
        type: BlockType
        data: bytes

        def __post_init__(self):
            assert self.validate_checksum(self.data), "Block checksum mismatch"
            self.data = self.data[2:-1]

        def extend(self, extra: bytes) -> None:
            assert self.validate_checksum(extra), "Block checksum mismatch"
            self.data += extra[2:-1]

        @staticmethod
        def validate_checksum(data) -> bool:
            cmp = data[-1] & 0xFF

            sum = 0
            for byte in data[:-1]:
                sum += byte

            return cmp == (~sum & 0xFF)
    
    @dataclass
    class Symbol:
        name: str = ""
        address: int = 0
        section: int = 0
        is_entry: bool = False

        def get_elf_type(self)-> "SymType":
            if self.is_entry:
                return SymType.FUNC
            
            return SymType.NOTYPE
    
    @dataclass
    class Reloc:
        rtype: int = 0
        address: int = 0
        value: int = 0

    @dataclass
    class Section:
        name: str = ""
        address: int = 0
        lenght: int = 0
        align: int = 1
        content: bytes = b""
        relocs: list["Sysrof.Reloc"] = field(default_factory=list)
    
    @dataclass
    class Line:
        number: int = 0
        section: int = 0
        start: int = 0
        end: int = 0
        file: "Sysrof.File" = None
    
    @dataclass
    class File:
        path: str = ""
        is_dir: bool = 0
        dir_no: int = 0
        lines: list["Sysrof.Line"] = field(default_factory=list)
        index: int = 0

    blocks: list[Block] = field(default_factory=list)
    sections: list[Section] = field(default_factory=list)
    ext_syms: list[Symbol] = field(default_factory=list)
    loc_syms: list[Symbol] = field(default_factory=list)
    src_files: list[File] = field(default_factory=list)
    src_lines: list[Line] = field(default_factory=list)
    endian: Endian = Endian.BIG
    name: str = ""
    tool: str = ""
    date: str = ""
    version: str = ""
    segmented: int = 0
    field_size: int = 0

    @classmethod
    def from_path(cls, p: Path) -> "Sysrof":
        with p.open("rb") as f:
            data = f.read()
        return cls.from_bytes(data)

    @classmethod
    def from_bytes(cls, data: bytes) -> "Sysrof":
        out = cls()
        data_end = len(data)
        f = BytesIO(data)
        while f.tell() < data_end:
            fmt, size = struct.unpack("<BB", f.read(2))
            f.seek(-2, 1)
            
            bt = BlockType(fmt & 0x7F)
            split_block = (fmt & 0x80) == 0
            
            block = Sysrof.Block(bt, f.read(size))
            
            while split_block:
                fmt, size = struct.unpack("<BB", f.read(2))
                f.seek(-2, 1)
                
                bt = BlockType(fmt & 0x7F)
                split_block = (fmt & 0x80) == 0

                assert block.type == bt, "Block chain type mismatch!"
                
                block.extend(f.read(size))

            out.blocks.append(block)

            if block.type == BlockType.TRAILER_INFO:
                break

        cur_unit = None
        cur_section: int = None
        for block in out.blocks:
            # print(f"Parsing {block.type.name}")

            f = BytesIO(block.data)
            f_end = len(block.data)

            if block.type == BlockType.HEADER_INFO:
                fmt = struct.unpack(">B", f.read(1))[0]
                endian = (fmt >> 3) & 1
                fmt = (fmt & 0xF0) >> 4
                
                if (fmt == 0):
                    raise ValueError("ABS files not supported")
                if (fmt == 0xF):
                    raise ValueError("NOSPEC files not supported")
                
                out.endian = Endian.LITTLE if endian == 1 else Endian.BIG

                out.date, unit_cnt, code_type = struct.unpack(">12sHB", f.read(12 + 2 + 1))

                if unit_cnt > 1:
                    raise ValueError("Only single unit files for the moment")
                if code_type != 0:
                    raise ValueError("Illegal format, code type not ASCII")
                
                out.version, adrbs, segfield = struct.unpack(">4sBB", f.read(4 + 1 + 1))

                f.read(4)

                out.segmented = (segfield >> 7) & 1
                out.field_size = (segfield >> 3) & 0xF
                
                if adrbs != 8:
                    raise ValueError("Address bit size not 8!")
                
                if out.field_size != 4:
                    raise ValueError("Field size not 4!")
                
                slen = struct.unpack(">B", f.read(1))[0]
                f.read(slen) if slen != 0 else f.read(1)

                slen = struct.unpack(">B", f.read(1))[0]
                name = struct.unpack(f">{slen}s", f.read(slen))[0]

                slen = struct.unpack(">B", f.read(1))[0]
                cpu = struct.unpack(f">{slen}s", f.read(slen))[0]
                cpu = cpu.decode()
            
                assert cpu == "SH", f"CPU type not SH ({cpu})"

            elif block.type == BlockType.UNIT_INFO:
                f.read(7)
                slen = struct.unpack(">B", f.read(1))[0]
                name = struct.unpack(f">{slen}s", f.read(slen))[0]
                out.name = name.decode()

                slen = struct.unpack(">B", f.read(1))[0]
                tool = struct.unpack(f">{slen}s", f.read(slen))[0]
                out.tool = tool.decode()
                
                date = struct.unpack(">12s", f.read(12))[0]
                out.date = date.decode()

            elif block.type == BlockType.SECTION_HEADER_INFO:
                cur_unit, cur_section = struct.unpack(">HH", f.read(2 + 2))

            elif block.type == BlockType.SECTION_INFO:
                f.read(1) # Skip fmt
                address, lenght, align = struct.unpack(">III", f.read(4 + 4 + 4))
                f.read(3) # Skip flags
                slen = struct.unpack(">B", f.read(1))[0]
                name = struct.unpack(f">{slen}s", f.read(slen))[0]
                name = name.decode()
                out.sections.append(Sysrof.Section(name, address, lenght, align))

            elif block.type == BlockType.EXT_REF_INFO:
                while f.tell() < f_end:
                    rtype, slen = struct.unpack(">BB", f.read(1 + 1))
                    name = struct.unpack(f">{slen}s", f.read(slen))[0]
                    name = name.decode()
                    is_entry = ((rtype & 0xC0) >> 6) == 0 # ER_ENTRY
                    out.ext_syms.append(Sysrof.Symbol(name, is_entry=is_entry))
            
            elif block.type == BlockType.EXT_DEF_INFO:
                while f.tell() < f_end:
                    section, rtype, addr, slen = struct.unpack(">HBIB", f.read(2 + 1 + 4 + 1))
                    name = struct.unpack(f">{slen}s", f.read(slen))[0]
                    name = name.decode()
                    is_entry = ((rtype & 0xE0) >> 5) == 0 # ED_ENTRY
                    if ((rtype & 0xE0) >> 5) == 2: # ED_CONST
                        raise ValueError
                    out.loc_syms.append(Sysrof.Symbol(name, addr, section, is_entry=is_entry))
            
            elif block.type == BlockType.RELOC_INFO:
                while f.tell() < f_end:
                    attr, addr = struct.unpack(">BI", f.read(1 + 4))
                    bitpos = (attr >> 4) & 7
                    f.read((bitpos + 1)* 2)
                    rlen = struct.unpack(">B", f.read(1))[0]
                    
                    if rlen != 4:
                        raise ValueError("Relocation expression too big")

                    rtype, rval, _ = struct.unpack(">BHB", f.read(1 + 2 + 1))

                    rel = Sysrof.Reloc(rtype, addr, rval)

                    out.sections[cur_section].relocs.append(rel)

            elif block.type == BlockType.OBJECT_INFO:
                while f.tell() < f_end:
                    t = struct.unpack(">B", f.read(1))[0]
                    add = 0
                    if (t & 0x80):
                        start_addr = struct.unpack(">I", f.read(4))[0]
                        # print(f"0x{start_addr:08X}")
                        add = b"\x00" * (start_addr - len(out.sections[cur_section].content))
                    if (t & 0x40):
                        rep_count = struct.unpack(">I", f.read(4))[0]
                    else:
                        rep_count = 0

                    data_len = struct.unpack(">B", f.read(1))[0]
                    final_data = f.read(data_len)
                    if rep_count != 0:
                        final_data = final_data * rep_count
                    out.sections[cur_section].content += add + final_data
            elif block.type == BlockType.DEBUG_UNIT_SUB_INFO:
                neg_number, src_file_count = struct.unpack(
                    ">HH", f.read(4)
                )
                for _ in range(src_file_count):
                    t, slen = struct.unpack(">BB", f.read(2))
                    is_dir = t & 0x80 == 0x80
                    name = struct.unpack(f">{slen}s", f.read(slen))[0]
                    name = name.decode()
                    if is_dir:
                        dir_no = struct.unpack(">H", f.read(2))[0]
                    else:
                        dir_no = 0
                    fl = Sysrof.File(name, is_dir, dir_no)
                    out.src_files.append(fl)
                    fl.index = len(out.src_files)
            elif block.type == BlockType.LINE_INFO:
                count = struct.unpack(">H", f.read(2))[0]
                for _ in range(count):
                    file, line, section, start, end, calls = struct.unpack(">HHHIIH", f.read(16))
                    ln = Sysrof.Line(line, section, start, end)
                    ln.file = out.src_files[file]
                    out.src_files[file].lines.append(ln)
                    out.src_lines.append(ln)
                    _ = struct.unpack(f">{calls}I", f.read(calls * 4))

        out.src_lines.sort(key=lambda x: x.start)

        return out

# DWARF stuff
def encode_uleb128(value: int) -> bytes:
    out = bytearray()
    v = value & 0xFFFFFFFFFFFFFFFF
    while True:
        byte = v & 0x7F
        v >>= 7
        if v != 0:
            out.append(byte | 0x80)
        else:
            out.append(byte)
            break
    return bytes(out)

def encode_sleb128(value: int) -> bytes:
    out = bytearray()
    more = True

    while more:
        byte = value & 0x7F
        sign_bit = byte & 0x40
        value >>= 7  # arithmetic shift, preserves sign in Python

        if ((value == 0 and not sign_bit) or
            (value == -1 and sign_bit)):
            more = False
        else:
            byte |= 0x80
        out.append(byte)

    return bytes(out)

# TODO: Perhaps use classes? It's pretty line-number specific tho
def build_dwarf(elf: "ElfBuilder", rof: Sysrof):
    sec = elf.Shdr(
        ".debug_line", 
        sh_type=SectionType.PROGBITS,
        sh_align=1
    )

    elf.add_section(sec)
    elf.add_reloc_section(sec, True)

    d = struct.pack(
        elf.endian.get_format() + "BBbBB",
        # 0x33, # length
        # 3, # version
        # 0x1E, # header length
        2, # min instr len
        1, # default is stmt
        -5, # line base
        14, # line range
        13 # opcode base
    )
    d += b"\x00\x01\x01\x01\x01\x00\x00\x00\x01\x00\x00\x01" # std opcode lengths

    d += b"\x00" # dir entries

    # file entries

    for file in rof.src_files:
        d += file.path.encode() + b"\x00"
        d += encode_uleb128(0) # dir
        d += encode_uleb128(0) # time
        d += encode_uleb128(0) # length
    
    # end file entries
    d += b"\x00"

    end_hdr = len(d)

    text = elf.get_section(".text")[1]

    # gaps = []
    # for a, b in zip(rof.src_lines, rof.src_lines[1:]):
    #     if a.end != b.start:
    #         gaps.append((a.end, b.start))
    #         # print(f"{a.number} 0x{a.end:06X} - 0x{b.start:06X}")
    #     print(f"{a.number} 0x{a.start:06X} - 0x{a.end:06X}")
    # print(f"{rof.src_lines[-1].number} 0x{rof.src_lines[-1].end:06X} - 0xEND")

    cur_file = 1
    cur_line = 1
    cur_addr = 0
    needs_addr = True
    for line in rof.src_lines:
        # set file (if applicable)
        # print(line.file.path, line.number, f"0x{line.start:06X} 0x{line.end:06X}")
        if line.file.index != cur_file:
            d += b"\x04" # DW_LNS_set_file
            d += encode_uleb128(line.file.index)
            cur_file = line.file.index

        if needs_addr:
            needs_addr = False
            # set addr
            d += b"\x00"
            d += encode_uleb128(5)
            d += b"\x02" # DW_LNE_set_address
            d += struct.pack(
                elf.endian.get_format() + "I",
                0
            )
            reloc = elf.Reloc(
                len(d) + 10 - 4,
                RelType.SH_DIR32,
                symbol=text.symbol,
                r_addend=line.start
            )
            elf.add_reloc(sec, reloc)
        else:
            # add addr, cuts down the amount of unnecesary relocs
            d += b"\x02" # DW_LNS_advance_pc
            d += encode_uleb128((line.start - cur_addr) // 2)
            cur_addr += line.start - cur_addr

        # set line
        d += b"\x03" # DW_LNS_advance_line
        d += encode_sleb128(line.number - cur_line)
        cur_line = line.number
        
        # push
        d += b"\x01" # DW_LNS_copy
    # end
    d += b"\x00"
    d += b"\x01"
    d += b"\x01" # DW_LNS_end_sequence

    d = struct.pack(elf.endian.get_format() + "HI", 3, end_hdr) + d
    sec.data = struct.pack(elf.endian.get_format() + "I", len(d)) + d

    sec_info = elf.Shdr(
        ".debug_info", 
        sh_type=SectionType.PROGBITS,
        sh_align=1
    )

    data = bytearray()
    header = bytearray()
    header += struct.pack(elf.endian.get_format() + 'I', 0)      # unit_length (filled later)
    header += struct.pack(elf.endian.get_format() + 'H', 2)      # version
    header += struct.pack(elf.endian.get_format() + 'I', 0)      # abbrev_offset
    header += b'\x04'                   # address_size = 4
    data += header

    # DIE
    data += encode_uleb128(1)           # abbrev code 1
    data += struct.pack(elf.endian.get_format() + 'I', 0)  # DW_AT_stmt_list
    data += b'dummy.c\x00'     # DW_AT_name
    data += b'\x00'     # DW_AT_comp_dir
    data += struct.pack(elf.endian.get_format() + 'I', 0)       # DW_AT_low_pc
    data += struct.pack(elf.endian.get_format() + 'I', 0x200)      # DW_AT_high_pc
    data.append(0)                          # end of DIE

    # patch length
    struct.pack_into(elf.endian.get_format() + 'I', data, 0, len(data) - 4)
    sec_info.data = bytes(data)

    elf.add_section(sec_info)
    elf.add_reloc_section(sec_info, True)

    sec_abrv = elf.Shdr(
        ".debug_abbrev", 
        sh_type=SectionType.PROGBITS,
        sh_align=1
    )

    # DWARF2 abbrev table
    # abbrev 1: DW_TAG_compile_unit
    #  - DW_AT_stmt_list (data4)
    #  - DW_AT_name (string)
    #  - DW_AT_comp_dir (string)
    #  - DW_AT_low_pc (addr)
    #  - DW_AT_high_pc (addr)
    #  - end of attributes (0,0)

    abbrev = b""
    abbrev += encode_uleb128(1)  # abbrev code
    abbrev += encode_uleb128(0x11)  # DW_TAG_compile_unit
    abbrev += b"\x00"  # has children? no
    # DW_AT_stmt_list
    abbrev += encode_uleb128(0x10)  # DW_AT_stmt_list
    abbrev += encode_uleb128(0x06)  # DW_FORM_data4
    # DW_AT_name
    abbrev += encode_uleb128(0x03)
    abbrev += encode_uleb128(0x08)
    # DW_AT_comp_dir
    abbrev += encode_uleb128(0x1b)
    abbrev += encode_uleb128(0x08)
    # DW_AT_low_pc
    abbrev += encode_uleb128(0x11)
    abbrev += encode_uleb128(0x01)
    # DW_AT_high_pc
    abbrev += encode_uleb128(0x12)
    abbrev += encode_uleb128(0x01)
    # end
    abbrev += b'\x00\x00'
    # terminator for abbrev section
    abbrev += b'\x00'

    sec_abrv.data = abbrev

    elf.add_section(sec_abrv)
    elf.add_reloc_section(sec_abrv, True)

# ELF stuff

class ELF_CLASS(IntEnum):
    CLASS_NONE = 0
    CLASS_32 = 1
    CLASS_64 = 2

class SectionType(IntEnum):
    NULL = 0
    PROGBITS = 1
    SYMTAB = 2
    STRTAB = 3
    RELA = 4
    NOBITS = 8
    REL = 8

class SectionFlags(IntFlag):
    NONE = 0
    WRITE = 1
    ALLOC = 2
    EXECINSTR = 4
    MERGE = 0x10
    STRINGS = 0x20
    INFO_LINK = 0x40

class SymBind(IntEnum):
    LOCAL = 0
    GLOBAL = 1

class SymType(IntEnum):
    NOTYPE = 0
    OBJECT = 1
    FUNC = 2
    SECTION = 3
    FILE = 4
    COMMON = 5

class RelType(IntEnum):
    SH_NONE = 0
    SH_DIR32 = 1

class EhdrFlags(IntEnum):
    SH_ANY = 0
    SH1 = 1
    SH2 = 2
    SH3 = 3
    SH_DSP = 4
    SH3_DSP = 5
    SH4AL_DSP = 6
    SH3E = 8
    SH4 = 9
    SH2E = 11
    SH4A = 12
    SH2A = 13
    SH4_NOFPU = 16
    SH4A_NOFPU = 17
    SH4_NOMMU_NOFPU = 18
    SH2A_NOFPU = 19
    SH3_NOMMU = 20
    SH2A_SH4_NOFPU = 21
    SH2A_SH3_NOFPU = 22
    SH2A_SH4 = 23
    SH2A_SH3E = 24

    @classmethod
    def from_string(cls, value: str) -> "EhdrFlags":
        value = value.lower()
        if value in ISA_ALIASES:
            return ISA_ALIASES[value]
        raise argparse.ArgumentTypeError(
            f"Invalid ISA '{value}'. Expected one of: {', '.join(ISA_ALIASES.keys())}"
        )

    def __str__(self) -> str:
        # For argparse help text
        for alias, enum_val in ISA_ALIASES.items():
            if enum_val is self:
                return alias
        return self.name
    
# User-friendly aliases
ISA_ALIASES = {
    "sh" : EhdrFlags.SH1,
    "sh-dsp" : EhdrFlags.SH_DSP,
    "sh2" : EhdrFlags.SH2,
    "sh2e" : EhdrFlags.SH2E,
    "sh2a" : EhdrFlags.SH2A,
    # "sh2a-nofpu" : EhdrFlags.SH2A_NOFPU,
    "sh3" : EhdrFlags.SH3,
    "sh3e" : EhdrFlags.SH3E,
    "sh3-dsp" : EhdrFlags.SH3_DSP,
    # "sh3-nommu" : EhdrFlags.SH3_NOMMU,
    "sh4" : EhdrFlags.SH4,
    "sh4a" : EhdrFlags.SH4A,
    "sh4al-dsp" : EhdrFlags.SH4AL_DSP,
    "sh4-nofpu" : EhdrFlags.SH4_NOFPU,
    # "sh4-nommu-nofpu" : EhdrFlags.SH4_NOMMU_NOFPU,
    "sh4a-nofpu" : EhdrFlags.SH4A_NOFPU,
    # "sh2a-or-sh4-nofpu" : EhdrFlags.SH2A_SH4_NOFPU,
    # "sh2a-or-sh3-nofpu" : EhdrFlags.SH2A_SH3_NOFPU,
    # "sh2a-or-sh4" : EhdrFlags.SH2A_SH4,
    # "sh2a-or-sh3e" : EhdrFlags.SH2A_SH3E,
}

class ElfBuilder:
    @dataclass
    class Ehdr:
        def get_bytes(
            self, endian: Endian, flags: EhdrFlags, shoff: int, section_count: int, shstrtab_index: int
        ) -> bytes:
            out = b""
            out += b"\x7fELF"
            out += bytes(
                [
                    1, # CLASS_32
                    endian,
                    1, # EV_CURRENT
                    0, # OSABI_NONE
                    0, # ABIVERSION_NONE
                ]
            )
            out += bytes(7) # padding

            # Header
            out += struct.pack(
                endian.get_format() + "HHIIIIIHHHHHH",
                1,  # e_type -> ET_REL
                42, # e_machine -> EM_SH
                1,  # e_version -> EV_CURRENT
                0,  # e_entry
                0,  # e_phoff
                shoff,  # e_shoff
                flags,  # e_flags
                52, # e_ehsize
                0,  # e_phentsize
                0,  # e_phnum
                40, # e_shentsize
                section_count,  # e_shnum
                shstrtab_index,  # e_shstrndx
            )
            return out
    
    @dataclass
    class Shdr:
        name: str = ""
        sh_name: int = 0
        sh_type: SectionType = SectionType.NULL
        sh_flags: SectionFlags = SectionFlags.NONE
        sh_addr: int = 0
        sh_offset: int = 0
        sh_size: int = 0 # for NOBITS sections
        sh_link: int = 0
        sh_info: int = 0
        sh_align: int = 0
        sh_entsize: int = 0
        data: bytes = b""
        # bookeeping
        symbol: "ElfBuilder.Symbol" = None
        index: int = 0

        def get_bytes(self, endian: Endian) -> bytes:
            if self.sh_type == SectionType.NOBITS:
                size = self.sh_size
            else:
                size = len(self.data)
            
            out = b""
            out += struct.pack(
                endian.get_format() + "IIIIIIIIII",
                self.sh_name,
                self.sh_type,
                self.sh_flags,
                self.sh_addr,
                self.sh_offset,
                size,
                self.sh_link,
                self.sh_info,
                self.sh_align,
                self.sh_entsize
            )
            return out

    @dataclass
    class Symbol:
        name: str = ""
        st_name: int = 0
        st_value: int = 0
        st_size: int = 0
        st_bind: SymBind = SymBind.LOCAL
        st_type: SymType = SymType.NOTYPE
        st_other: int = 0
        st_shndx: int = -1
        section: "ElfBuilder.Shdr" = None
        index: int = -1

        def get_bytes(self, endian: Endian) -> bytes:
            out = b""

            if self.st_shndx != -1:
                index = self.st_shndx
            elif self.section is None:
                index = 0
            else:
                index = self.section.index

            out += struct.pack(
                endian.get_format() + "IIIbbH",
                self.st_name,
                self.st_value,
                self.st_size,
                (self.st_bind << 4) | self.st_type, # st_info
                self.st_other,
                index,
            )
            return out
    
    @dataclass
    class Reloc:
        r_offset: int = 0
        r_type: RelType = RelType.SH_NONE
        r_index: int = 0
        r_addend: int = 0
        symbol: "ElfBuilder.Symbol" = None

        def get_bytes(self, endian: Endian, is_rela: bool) -> bytes:
            out = b""

            if self.symbol is None:
                index = 0
            else:
                index = self.symbol.index
            
            out += struct.pack(
                endian.get_format() + "II",
                self.r_offset,
                (index << 8) | self.r_type, # r_info
            )

            if is_rela:
                out += struct.pack(
                    endian.get_format() + "I",
                    self.r_addend
                )
            
            return out

    @dataclass
    class StrTbl:
        strings: dict[str, int] = field(default_factory=lambda: {"": 0})
        end: int = 1

        def add_str(self, string: str) -> int:
            if string not in self.strings:
                self.strings[string] = self.end
                self.end += len(string) + 1

            return self.strings[string]
        
        def get_bytes(self) -> bytes:
            out = b""
            for k in self.strings.keys():
                out += k.encode() + b"\x00"

            return out

    def __init__(self, endian: Endian, isa: EhdrFlags):
        self.sections: list[ElfBuilder.Shdr] = []
        self.shstrtab: ElfBuilder.StrTbl = ElfBuilder.StrTbl()
        self.strtab: ElfBuilder.StrTbl = ElfBuilder.StrTbl()
        self.global_symbols: list[ElfBuilder.Symbol] = []
        self.local_symbols: list[ElfBuilder.Symbol] = []
        self.relocs: dict[int, list[ElfBuilder.Reloc]] = {}
        self.comment = ""
        self.endian: Endian = endian
        self.isa: EhdrFlags = isa

        # Reserve section 0 (NULL)
        self.sections.append(ElfBuilder.Shdr())
        
        # Reserve symbol 0 (NULL)
        self.local_symbols.append(ElfBuilder.Symbol())

        # Make .symtab, .shstrtab and .strtab
        self.symtab_s: ElfBuilder.Shdr = ElfBuilder.Shdr(
            name=".symtab", 
            sh_type=SectionType.SYMTAB,
            sh_align=4,
            sh_entsize=16,
        )
        self.strtab_s: ElfBuilder.Shdr = ElfBuilder.Shdr(
            name=".strtab", 
            sh_type=SectionType.STRTAB,
            sh_align=1,
        )
        self.shstrtab_s: ElfBuilder.Shdr = ElfBuilder.Shdr(
            name=".shstrtab", 
            sh_type=SectionType.STRTAB,
            sh_align=1,
        )

    def get_section(self, name: str) -> tuple[int, Shdr]:
        for i, sec in enumerate(self.sections):
            if sec.name == name:
                return i, sec

        return -1, None

    def add_section(self, section: Shdr) -> int:
        section.sh_name = self.shstrtab.add_str(section.name)
        
        index = len(self.sections)
        section.index = index
        self.sections.append(section)

        if section.sh_type in (SectionType.PROGBITS, SectionType.NOBITS):
            sym = ElfBuilder.Symbol()
            sym.st_type = SymType.SECTION
            sym.st_shndx = index
            sym.name = section.name
            section.symbol = sym
            self.add_symbol(sym)
        
        return index
    
    def add_reloc_section(self, section: Shdr, is_rela: bool) -> int:
        if is_rela:
            name = ".rela" + section.name
            stype = SectionType.RELA
            entsize = 12
        else:
            name = ".rel" + section.name
            stype = SectionType.REL
            entsize = 8
        
        rsec = ElfBuilder.Shdr(
            name=name,
            sh_type=stype,
            sh_flags=SectionFlags.INFO_LINK,
            sh_info=section.index,
            sh_align=4,
            sh_entsize=entsize
        )

        rsec.sh_name = self.shstrtab.add_str(rsec.name)
        index = len(self.sections)
        rsec.index = index

        self.sections.append(rsec)
        self.relocs[section.index] = list()
        
        return index

    def add_reloc(self, section: Shdr, rel: Reloc):
        if section.index not in self.relocs:
            raise ValueError(f"Missing reloc section for {section.name} ({section.index})")
        
        self.relocs[section.index].append(rel)
    
    def add_symbol(self, sym: Symbol):
        sym.st_name = self.strtab.add_str(sym.name)
        if sym.st_bind == SymBind.LOCAL:
            self.local_symbols.append(sym)
        else:
            self.global_symbols.append(sym)

    def build(self) -> bytes:
        if self.comment != "":
            sec = ElfBuilder.Shdr(
                ".comment", 
                data=self.comment.encode(), 
                sh_type=SectionType.PROGBITS, 
                sh_flags=SectionFlags.STRINGS | SectionFlags.MERGE, 
                sh_align=1
            )
            self.add_section(sec)

        # Add .symtab section
        symtab_blob = b""
        symtab_i = 0
        for sym in self.local_symbols:
            symtab_blob += sym.get_bytes(self.endian)
            sym.index = symtab_i
            symtab_i += 1

        for sym in self.global_symbols:
            symtab_blob += sym.get_bytes(self.endian)
            sym.index = symtab_i
            symtab_i += 1

        # Finalize reloc sections
        for i, rels in self.relocs.items():
            rsec = self.sections[i + 1]
            is_rela = rsec.name.startswith(".rela")

            blob = b""
            for rel in rels:
                blob += rel.get_bytes(self.endian, is_rela)
            
            rsec.data = blob


        # Finalize special sections
        symtab_index = len(self.sections)
        self.add_section(self.symtab_s)
        self.sections[-1].data = symtab_blob
        self.sections[-1].sh_link = len(self.sections)
        self.sections[-1].sh_info = len(self.local_symbols)

        self.add_section(self.strtab_s)
        self.sections[-1].data = self.strtab.get_bytes()

        self.add_section(self.shstrtab_s)
        self.sections[-1].data = self.shstrtab.get_bytes()

        shstrtab_idx = len(self.sections) - 1

        # Layout: header | section data | section headers
        offset = 52  # ELF header size (Elf32_Ehdr)
        body = b""
        for i, sec in enumerate(self.sections[1:]):
            _off = offset
            if sec.sh_type == SectionType.REL or sec.sh_type == SectionType.RELA:
                sec.sh_link = symtab_index

            if sec.sh_align > 1:
                offset = (offset + sec.sh_align - 1) & ~(sec.sh_align - 1)

            # print(f"{i} {_off:X} {offset:X}", sec.sh_align, "%X" % len(sec.data), offset-_off)
            body += b"\0" * (offset-_off)
            body += sec.data

            sec.sh_offset = offset
            if sec.sh_type != SectionType.NOBITS:
                offset += len(sec.data)
        shoff = (offset + 3) & ~3  # align section header table

        # ELF Header
        ehdr = ElfBuilder.Ehdr().get_bytes(self.endian, self.isa, shoff, len(self.sections), shstrtab_idx)

        # Section headers
        shdrs = []
        for sec in self.sections:
            shdrs.append(sec.get_bytes(self.endian))
        shdr_table = b"".join(shdrs)

        return ehdr + body + (b"\0" * (shoff - len(ehdr) - len(body))) + shdr_table


if __name__ == "__main__":
    main()
