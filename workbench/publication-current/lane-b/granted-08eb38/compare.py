import sys,shutil,re,json,struct,hashlib
from pathlib import Path
sys.path.insert(0,'tools')
import diff_unit as d
from build import compile_unit
from core import ROOT,load,number,verify_rom,elf_segments,memory_bytes,link_map
source='work/granted-08eb38/tu08eb38.c';text=Path(source).read_text()
exports={'_'+m:int(m[5:],16) for m in re.findall(r'\b(func_0c[0-9a-f]{6})\([^;{}]*\)\n\{',text)}
tables=re.findall(r'\(\*(table_0c[0-9a-f]{6})\[\]\)',text)
e=load(ROOT/'build/08eb38-live-root-boundary.json')[0]
u={'id':'diff','source':source,'mode':'candidate','exports':exports,'imports':{s:int(s[6:],16) for s in tables},'sections':[{'section':'P','kind':'code','address':0xc08eb38,'size':3180,'interior':d.coalesce([{'address':number(p['address']),'size':p['size'],'kind':'data'} for p in e['pools']])}]}
w=ROOT/'work/granted-08eb38/compile';shutil.copytree(ROOT/'toolchain/hitachi-shc-5.0r31',w,dirs_exist_ok=True)
# Stage the unchanged published shared header; compiler and verification code stay unchanged.
header=ROOT/'work/granted-08eb38/published-objects.h';original=shutil.copyfile
def copy(src,dst,*args,**kwargs):
 if Path(src)==ROOT/'src/include/objects.h':src=header
 return original(src,dst,*args,**kwargs)
shutil.copyfile=copy
compile_unit(u,w,load(ROOT/'config/compiler.json')['sets']['game']);d.resolve_imports(u,w,'diff');elf,m=compile_unit(u,w,load(ROOT/'config/compiler.json')['sets']['game'])
t=load(ROOT/'config/target.json');rom=verify_rom(t);off,base,size=(number(t['main'][k]) for k in ['rom_offset','address','size'])
if len(sys.argv)>1:
 addr=int(sys.argv[1],16);n=int(sys.argv[2]);candidate=link_map(m)[1][f'_func_{addr:08x}'];ours=memory_bytes(elf_segments(elf),candidate,n);retail=rom[off+addr-base:off+addr-base+n];print(f'Retail {addr:08x}, candidate {candidate:08x}')
 for i in range(0,n,2):
  a,b=struct.unpack_from('<H',retail,i)[0],struct.unpack_from('<H',ours,i)[0]
  if a!=b:print(f'{addr+i:08x}: retail {d.sh4.disasm(a,addr+i):32s} ours {d.sh4.disasm(b,addr+i)}')
proof,_=d.compare(u,elf,m,rom[off:off+size],base)
Path('work/granted-08eb38/unit.json').write_text(json.dumps(u,indent=2)+'\n');Path('work/granted-08eb38/proof.json').write_text(json.dumps(proof,indent=2)+'\n')
inputs={'source_sha256':hashlib.sha256(Path(source).read_bytes()).hexdigest(),'published_header_sha256':hashlib.sha256(header.read_bytes()).hexdigest(),'header_path':str(header),'exports':len(exports),'span_start':'0x0c08eb38','span_end':'0x0c08f7a4'}
Path('work/granted-08eb38/inputs.json').write_text(json.dumps(inputs,indent=2)+'\n')
print('STRICT',proof['exact'],proof['problems'])
for p in proof['sections']:print('SECTION',p)
for f in proof['functions']:print(f['symbol'],f['equal_bytes'],f['size'],f.get('exact'))
