"""Isolated compiler experiment; never changes accepted MVC2 options or units."""
import hashlib, json, os, shutil, subprocess, sys, tempfile
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
from core import runner, load
HERE = Path(__file__).resolve().parent
results = {}
with tempfile.TemporaryDirectory(prefix='tbg-probe-') as tmp:
    work = Path(tmp) / 'compiler'
    shutil.copytree(ROOT / 'toolchain/hitachi-shc-5.0r31', work)
    shutil.copy(HERE / 'probe.c', work / 'probe.c')
    for name, extra in [('game', []), ('size', ['-size']), ('nearest', ['-round=nearest']), ('both', ['-size', '-round=nearest'])]:
        command = runner() + [str(work / 'shc.exe'), 'probe.c', *load(ROOT / 'config/compiler.json')['sets']['game'], *extra, '-code=asmcode', '-object=probe.src']
        run = subprocess.run(command, cwd=work, env={**os.environ, 'SHC_LIB': '.', 'SHC_TMP': '.'}, capture_output=True, timeout=60)
        if run.returncode:
            raise RuntimeError(run.stdout.decode(errors='replace') + run.stderr.decode(errors='replace'))
        listing = (work / 'probe.src').read_bytes()
        (HERE / (name + '.src.txt')).write_bytes(listing)
        # Header records flags; compare instruction/data body separately.
        body = b'\n'.join(line for line in listing.splitlines() if not line.lstrip().startswith(b';'))
        results[name] = {'extra_flags': extra, 'body_sha256': hashlib.sha256(body).hexdigest()}
(HERE / 'results.json').write_text(json.dumps(results, indent=2) + '\n')
print(json.dumps(results, indent=2))
