import sys,json,struct,bisect
from pathlib import Path
sys.path.insert(0,'tools')
from core import load,number,verify_rom
from unit_spans import spans,owned_code_sections,branch_target
from pool_clusters import pc_relative_target
root=Path.cwd();target=load(root/'config/target.json');program=verify_rom(target);base=number(target['main']['address']);offset=number(target['main']['rom_offset']);image=program[offset:offset+number(target['main']['size'])]
ranges=[(number(r['address']),number(r['size']),r['kind']) for r in load(root/'config/mapping.json')['ranges']]
paths=[root,Path('/Users/gguthrie/Projects/mvc2-naomi-decomp'),Path('/Users/gguthrie/Projects/mvc2-naomi-solo-oct02'),Path('/Users/gguthrie/Projects/mvc2-naomi-effects-oct02'),Path('/Users/gguthrie/Projects/mvc2-naomi-private3-oct02'),Path('/Users/gguthrie/Projects/mvc2-worktrees/luna-a-oct02'),Path('/Users/gguthrie/Documents/Codex/2026-10-02/ther/work/mvc2-luna-b')]
paths.append(Path('/Users/gguthrie/Projects/mvc2-naomi-consolidate-oct02-ci'))
units=[]
for p in paths:units+=json.load(open(p/'config/units.json'))
owned=[]
for lo,hi in sorted(owned_code_sections(units)):
 if owned and lo<=owned[-1][1]:owned[-1]=(owned[-1][0],max(hi,owned[-1][1]))
 else:owned.append((lo,hi))
lane=[r for r in ranges if 0x0c1a0000<=r[0] and r[0]+r[1]<=0x0c1e9000]
found=[(s,n) for s,n in spans(image,base,lane,owned) if 8<=n<=1000]
edges=[]
for lo,n,k in ranges:
 if k!='code':continue
 for pc in range(lo,lo+n,2):
  w=struct.unpack_from('<H',image,pc-base)[0];b=branch_target(w,pc);l=pc_relative_target(w,pc)
  if b is not None:edges.append((b,pc,'call' if w>>12==0xb else 'branch'))
  if l:edges.append((l[0],pc,'literal'))
edges.sort();targets=[e[0] for e in edges];valid=[]
for s,n in found:
 incoming=edges[bisect.bisect_left(targets,s):bisect.bisect_left(targets,s+n)]
 if not any(not s<=pc<s+n and (k!='call' or t!=s) for t,pc,k in incoming):valid.append({'start':f'0x{s:08x}','size':n})
json.dump({'checkouts_read':[str(p) for p in paths],'spans':valid},open('work/after-handoff-2630debe/fresh-spans.json','w'),indent=2)
print('registries read',len(paths),'small unowned spans',len(valid));print(json.dumps(valid[:40],indent=2))
