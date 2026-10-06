# Continuation drafts — 2026-10-04

Unverified C research, excluded from the unit registry and all decompilation credit.

- `tu_0c14a9d0.draft.c`: 38 translated functions; complete span 3,664/3,848 bytes equal, all exported function addresses align. Remaining work includes register allocation and instruction ordering.
- `tu_0c133b88.draft.c`: 33 translated functions; complete span 3,096/3,624 bytes equal and correct total size; six exported function addresses still differ. The paired constructors return zero on the resource guard and fall through otherwise; their fallthrough return value must not be consumed.

Both compile with the fixed bundled game options. Native runtime bindings, literal pools, incoming branches, callbacks, and type contracts require complete registration review before either unit can earn credit. Journals include rejected experiments and corrected field/float interpretations; the C files are the retained drafts, not verified source.

- `tu_0c04e6a8.draft.c`: five operand/state handlers; 290/472 bytes equal at the correct total size. Native state bytes at Actor offsets 0x440/0x441 and signed flags at 0x495 are recovered separately. The inline word reader preserves native unsigned narrowing and signed conversion; the family remains unverified.

- `tu_0c1d9b70.draft.c`: four translated allocator/initialization/fade functions; 158/512 bytes equal at the correct total size. The initializer and fade boundaries remain displaced. Native random range and signed/unsigned remainder operations were reviewed; no matching credit is claimed.
