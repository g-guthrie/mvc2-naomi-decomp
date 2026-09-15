import json, struct, sys
sys.path.insert(0,'.')
from core import ROOT, load, number, verify_rom

target=load(ROOT/'config/target.json')
program=verify_rom(target)
offset,base,size=(number(target['main'][k]) for k in ('rom_offset','address','size'))
image=program[offset:offset+size]

def get(addr,n):
    return image[addr-base:addr-base+n]

d=json.load(open('/tmp/claude-0/-home-user-emerald-champions/939c6045-6ab7-5094-b505-ebe9c3eb1567/scratchpad/t4_batch_2.json'))

from vendor.sh4dis import sh4
def quicklook(addr,sz):
    b=get(addr,sz)
    errs=0
    n=0
    words=[]
    for i in range(0,len(b),2):
        w=struct.unpack_from('<H',b,i)[0]
        words.append(w)
        txt=sh4.disasm(w,addr+i)
        n+=1
        if txt=='error' or txt.startswith('error'):
            errs+=1
    from collections import Counter
    c=Counter(b)
    byte_rep=c.most_common(1)[0][1]
    dwords=[struct.unpack_from('<I',b,i)[0] for i in range(0,len(b)-3,4)]
    dc=Counter(dwords)
    dword_rep=dc.most_common(1)[0][1] if dwords else 0
    return errs,n,byte_rep,dword_rep

print("=== SAMPLE (40) ===")
for e in d['sample']:
    a=int(e['address'],16); sz=e['size']
    errs,n,br,dr=quicklook(a,sz)
    print(f"{hex(a)} sz={sz} err_ratio={errs}/{n} byte_rep={br} dword_rep={dr}")
