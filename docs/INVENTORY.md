# Main-image inventory notes

The main program is `0x0c021000` … `0x0c271000` (2,424,832 bytes). Catalog
units in `config/units.json` now cover that span (no unclassified bytes).

## How ranges were assigned

- **Matching C** stays as previously proven 4–6 byte leaves.
- **Code placeholders** start at BSR targets or aligned address-takes that
  look like prologues, then a CFG walk to `rts`. Words are not classified as
  code merely because they decode as SH-4.
- **Data placeholders** are pointer runs, C strings, zero fills, and every
  remainder after those function walks. Remainder is **not** instruction-decoded.

A walk that treated every in-image pointer as a function covered ~92% and was
rejected.

## Matching source

Only compiled C that equals retail at the original address is `status=matching`.
A complete layout of placeholders is not a 100% decompilation.
