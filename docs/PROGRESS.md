# Progress definitions

The dashboard follows the useful parts of decomp.dev's presentation: separate
code and data measures, source-unit status, and a byte-weighted color map.
It does not invent percentages where the original layout is still unknown.

| Measure | Meaning |
|---|---|
| Matching code/data bytes | Compiled source bytes that equal the original |
| Linked code/data bytes | Those source bytes verified at their original linked addresses |
| Identified code/data bytes | Reviewed ranges currently present in the unit catalog |
| Unclassified bytes | Main-image bytes not yet assigned a reviewed code/data range |
| Main image reconstructed | Linked source code + data divided by the fixed full main-image size |

**The code and data total sizes remain unavailable while unclassified bytes
remain.** A report of 32 matching bytes out of 32 currently identified code
bytes would be mathematically true but misleading as game progress. We report
32 linked code bytes and 0.00132% of the main image instead.

The initial data observations are raw address-reference cells. They have no
source reconstruction credit. Data must gain meaningful boundaries,
representation, and references before promotion. Changing the spelling of a
raw byte array or marking it `matching` is not sufficient.

## Catalog and proof

- `config/target.json` defines the immutable reference target and main extent.
- `config/units.json` holds nonoverlapping known units. Unknown gaps are derived;
  they cannot vanish because no source file represents them yet.
- `tools/project.py verify` builds matching source, verifies symbols/sections,
  compares original bytes, and checks the complete main and program-ROM images.
- `build/evidence.json` records successful per-unit results and a fingerprint
  of build inputs. It is deleted at the start of verification so a failed run
  cannot leave a usable old success record.
- `tools/report.py` requires current proof before rendering reports and graphics.

The HTML map supports whole-image, known-code, and known-data views. The README
graphic shows fixed address tiles and a clearly marked magnified source view.
Unreconstructed regions remain visible; matched source cannot double-count an
address or overlap a data unit.

## Scope and external reporting

The current target is the **main program**, not the full cartridge. The
service/test executable and other ROM contents remain explicit future targets.
They are not claimed as decompiled and are not stuffed into the data numerator.

This foundation uses a small report schema that can represent unknown totals.
The usual objdiff-v2 report has no equivalent unclassified-byte category.
Do not publish an objdiff “100% code” report based only on known tiny functions.
Once the original code/data layout is complete, the established totals can be
exported to objdiff-v2 without misleading denominator substitutions.

GitHub Actions checks and compiles every change. Only successful main builds
commit the refreshed infographic and dashboard. A passing report test alone
never substitutes for the source build and retail comparisons.
