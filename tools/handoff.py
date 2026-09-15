"""Derive the next-agent handoff from this build, never from a dated task list."""
from core import number
from inspect_rom import literal


def next_work(proof, mapping, image):
    base = proof['main_address']
    candidates = []
    for unit in proof['units']:
        if unit['credited']:
            continue
        external = set()
        for part in unit['sections']:
            if part['kind'] != 'code':
                continue
            start,size = number(part['address']),number(part['size'])
            for address in range(start,start+size-1,2):
                word=int.from_bytes(image[address-base:address-base+2],'little')
                ref=literal(word,address)
                if ref and not any(number(p['address']) <= ref[0] and ref[0]+ref[1] <= number(p['address'])+number(p['size']) for p in unit['sections']):
                    external.add(ref[0])
        candidates.append({'id':unit['id'],'source':unit['source'],'exact':unit['exact'],
                           'external_literals':sorted(external),
                           'reference_bytes':sum(p['size'] for p in unit['sections'] if p['kind']!='bss')})
    candidates.sort(key=lambda u:(not u['exact'],bool(u['external_literals']),u['reference_bytes'],u['id']))
    gaps=[p for p in mapping['ranges'] if p['kind']=='unknown']
    return candidates,gaps


def render(proof, mapping, image):
    candidates,gaps=next_work(proof,mapping,image)
    matched=sum(p['size'] for u in proof['units'] if u['credited'] for p in u['sections'] if p['kind']!='bss')
    lines=['# Next work — generated from the current build','',
           f"Input fingerprint: `{proof['input_sha256']}`. Rerun `python3 tools/build.py check` after edits.",'',
           f"Verified C: {matched:,} / {proof['main_size']:,} configured main-image bytes.",
           f"Mapping: {mapping['reviewed_code_bytes']:,} reviewed code bytes, {mapping['reviewed_data_bytes']:,} reviewed data bytes, {mapping['unknown_bytes']:,} unknown bytes.",
           '','## Start here','']
    if candidates:
        first=candidates[0]
        lines += [f"Work on `{first['id']}` (`{first['source']}`).",'',
                  '```sh',f"python3 tools/inspect_rom.py --unit {first['id']}",
                  f"python3 tools/build.py unit {first['id']}",'```','',
                  'Inspect the original instructions and generated `.src`, `.map`, and `.elf` in `build/work/`. Reconstruct the C and complete original layout. Promote only after the whole unit passes, then run the full check again.','']
        if first['exact']:
            lines += ['This candidate currently matches but is not credited. Review its source/range evidence before changing its mode to verified.','']
        lines += ['## Other current candidates','']
        for item in candidates:
            refs=', '.join(f'`0x{x:08x}`' for x in item['external_literals'])
            lines.append(f"- `{item['id']}`: {item['reference_bytes']} reference bytes." + (f' References literals outside its declared sections: {refs}. Resolve original surrounding layout first.' if refs else ''))
    elif gaps:
        gap=gaps[0]
        lines += ['No uncredited registered candidate remains. Review an unknown range and its incoming control flow before registering the next C unit.','',
                  '```sh',f"python3 tools/inspect_rom.py --address 0x{gap['address']:08x} --size {min(64,gap['size'])}",
                  'python3 tools/survey.py --limit 20','```','']
    else:
        lines += ['Review coverage: mapped-but-unreconstructed bytes still need C. Only when every configured target byte is reconstructed may this scope be complete. Check config/target.json for executable/data scopes not yet covered by the main-image metric.','']
    if gaps:
        lines += ['','## Mapping gaps','',
                  '`build/mapping.json` contains every gap. `python3 tools/survey.py --limit 20` creates a whole-image raw-call index in `build/survey.json`; opcode hits are not proven functions.','']
        lines += [f"- `0x{p['address']:08x}`: {p['size']:,} unknown bytes." for p in gaps[:8]]
    return '\n'.join(lines)+'\n',candidates
