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

def analyze(addr,sz):
    b=get(addr,sz)
    words=[struct.unpack_from('<H',b,i)[0] for i in range(0,len(b),2)]
    dwords=[]
    for i in range(0,len(b)-3,4):
        dwords.append(struct.unpack_from('<I',b,i)[0])
    # check constant high halfword page pattern
    highs=[dw>>16 for dw in dwords]
    from collections import Counter
    c=Counter(highs)
    most_common_high,cnt = c.most_common(1)[0] if c else (0,0)
    # check low halfwords decode as branch (top nibble 0xA/0xB) among dwords sharing that high
    lows_branch=0
    lows_total=0
    for dw in dwords:
        if dw>>16==most_common_high:
            lo=dw&0xffff
            lows_total+=1
            if (lo>>12) in (0xa,0xb):
                lows_branch+=1
    dword_repeat = Counter(dwords).most_common(1)[0][1] if dwords else 0
    byte_repeat = Counter(b).most_common(1)[0][1] if b else 0
    # branch density in words
    branchy = sum(1 for w in words if (w>>12) in (0xa,0xb))
    return dict(addr=addr,sz=sz,high_page_frac=cnt/max(1,len(dwords)), lows_branch_frac=lows_branch/max(1,lows_total),
                dword_repeat=dword_repeat, byte_repeat=byte_repeat, branchy_frac=branchy/max(1,len(words)),
                most_common_high=hex(most_common_high))

results=[]
for e in d['risky']:
    a=int(e['address'],16)
    r=analyze(a,e['size'])
    r['evidence']=e.get('evidence')
    r['repeat']=e.get('repeat')
    r['exit']=e.get('exit')
    r['prologue']=e.get('prologue')
    results.append(r)

# score suspicion: high dword_repeat relative to size, high high_page_frac with low lows_branch_frac, low branchy_frac
def suspicion(r):
    s=0
    n_dwords = r['sz']//4
    if n_dwords>=4 and r['dword_repeat']>=4: s+=3
    if n_dwords>=4 and r['high_page_frac']>0.5 and r['lows_branch_frac']<0.3: s+=3
    if r['byte_repeat']>=r['sz']*0.6: s+=2
    if r['branchy_frac']<0.02 and r['sz']>40: s+=1
    return s

for r in results:
    r['susp']=suspicion(r)

results.sort(key=lambda r:-r['susp'])
for r in results[:25]:
    print(hex(r['addr']),r['sz'],'susp',r['susp'],'dword_rep',r['dword_repeat'],'highfrac',round(r['high_page_frac'],2),'lowbranch',round(r['lows_branch_frac'],2),'byte_rep',r['byte_repeat'],'branchy',round(r['branchy_frac'],2))
