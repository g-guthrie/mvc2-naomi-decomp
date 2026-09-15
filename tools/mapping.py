"""Verify reviewed ranges and preserve every unreviewed byte as an explicit gap."""
from core import ROOT, load, number, sha


def review(image, base, entries=None, verified=()):
    entries = load(ROOT/'config/mapping.json')['ranges'] if entries is None else entries
    entries = list(entries)
    for unit in verified:
        if not unit['credited']:
            continue
        for part in unit['sections']:
            if part['kind'] == 'bss':
                continue
            start,end = number(part['address']),number(part['address'])+number(part['size'])
            pieces = [(start,end)]
            for known in entries:
                lo,hi = number(known['address']),number(known['address'])+number(known['size'])
                if start < hi and lo < end and known['kind'] != part['kind']:
                    raise ValueError('Verified source conflicts with reviewed code/data mapping')
                pieces = [(a,b) for x,y in pieces for a,b in [(x,min(y,lo)),(max(x,hi),y)] if a < b]
            for lo,hi in pieces:
                entries.append(dict(address=lo,size=hi-lo,kind=part['kind'],
                                    sha256=sha(image[lo-base:hi-base]),
                                    evidence=f"Current build verifies C unit {unit['id']} section {part['section']}"))
    ordered = sorted(entries,key=lambda p:number(p['address']))
    cursor, ranges = base, []
    totals = {'code':0,'data':0,'unknown':0}
    for part in ordered:
        address,size = number(part['address']),number(part['size'])
        if part['kind'] not in {'code','data'} or size <= 0 or address < cursor or address+size > base+len(image):
            raise ValueError('Invalid or overlapping reviewed mapping range')
        if not part.get('evidence') or sha(image[address-base:address-base+size]) != part['sha256']:
            raise ValueError(f'Mapping evidence/hash mismatch at 0x{address:08x}')
        if address > cursor:
            ranges.append(dict(address=cursor,size=address-cursor,kind='unknown'))
            totals['unknown'] += address-cursor
        ranges.append({**part,'address':address,'size':size})
        totals[part['kind']] += size
        cursor=address+size
    if cursor < base+len(image):
        ranges.append(dict(address=cursor,size=base+len(image)-cursor,kind='unknown'))
        totals['unknown'] += base+len(image)-cursor
    return {'status':'complete' if not totals['unknown'] else 'incomplete',
            'reviewed_code_bytes':totals['code'],'reviewed_data_bytes':totals['data'],
            'unknown_bytes':totals['unknown'],'main_sha256':sha(image),'ranges':ranges}
