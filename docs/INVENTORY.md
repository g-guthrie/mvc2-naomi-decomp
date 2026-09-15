# Main-image inventory notes

The main program is `0x0c021000` … `0x0c271000` (2,424,832 bytes). Catalog
units in `config/units.json` are the only classified ranges. Everything else
is unclassified.

## What is not a reviewed layout

Decoding every SH-4 word as an instruction, or treating every in-image pointer
as a function entry, over-covers the image (~92% in a CFG walk of 51k entries).
Those ranges are **not** written into `units.json`.

## Conservative scan (not catalogued)

Entries that are BSR targets or aligned address-takes **and** start with a
typical prologue (`sts.l pr`, `mov.l rN,@-r15`, `rts`, `mov #imm`):

- ~12,200 candidate entries
- ~1,618,104 bytes if CFG-walked and merged (66.7%)
- ~4,057 in-image pointer runs of length ≥ 4 (~139,892 bytes)

These figures are leads for hand review. They do not change progress totals.

## Matching source

Only compiled C that equals retail at the original address is `status=matching`.
Placeholder data pointer cells stay `assembly`.
