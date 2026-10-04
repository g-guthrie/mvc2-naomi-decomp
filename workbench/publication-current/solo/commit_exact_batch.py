from pathlib import Path
import subprocess,json
root=Path('/Users/gguthrie/Projects/mvc2-naomi-solo-oct02')
def git(*args):
 return subprocess.check_output(['git',*args],cwd=root,text=True).strip()
log=(root/'build/oct02-exact-batch-check.log').read_text()
assert 'PASS full main (2,424,832 bytes) and program ROM (4,194,304 bytes) match' in log
assert not git('diff','--cached','--name-only')
records=json.loads((root/'build/oct02-exact-batch/records.json').read_text())
latest={}
for rec in records:
 for rel in rec['paths']:latest[rel]=Path(rec['snapshot'])/rel
for rel,snap in latest.items():assert (root/rel).read_bytes()==snap.read_bytes(),rel
allowed=set(latest)|{'README.md'}
changed=set(git('diff','--name-only').splitlines())|set(git('ls-files','--others','--exclude-standard').splitlines())
assert changed<=allowed,changed-allowed
for i,rec in enumerate(records):
 for rel in rec['paths']:
  blob=git('hash-object','-w',str(Path(rec['snapshot'])/rel))
  git('update-index','--add','--cacheinfo','100644',blob,rel)
 if i==len(records)-1:git('add','README.md')
 print(git('commit','-m','Match effect unit '+rec['unit']),flush=True)
assert not git('status','--porcelain')
print(git('log','-3','--oneline'))
