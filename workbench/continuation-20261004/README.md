# Continuation drafts — 2026-10-04

Unverified C research, excluded from the unit registry and all decompilation credit.

- `tu_0c14a9d0.draft.c`: 38 translated functions; complete span 3,664/3,848 bytes equal, all exported function addresses align. Remaining work includes register allocation and instruction ordering.
- `tu_0c133b88.draft.c`: 33 translated functions; complete span 3,096/3,624 bytes equal and correct total size; six exported function addresses still differ. The paired constructors return zero on the resource guard and fall through otherwise; their fallthrough return value must not be consumed.

Both compile with the fixed bundled game options. Native runtime bindings, literal pools, incoming branches, callbacks, and type contracts require complete registration review before either unit can earn credit. Journals include rejected experiments and corrected field/float interpretations; the C files are the retained drafts, not verified source.

- `tu_0c04e6a8.draft.c`: five operand/state handlers; 290/472 bytes equal at the correct total size. Native state bytes at Actor offsets 0x440/0x441 and signed flags at 0x495 are recovered separately. The inline word reader preserves native unsigned narrowing and signed conversion; the family remains unverified.

- `tu_0c1d9b70.draft.c`: four translated allocator/initialization/fade functions; 158/512 bytes equal at the correct total size. The initializer and fade boundaries remain displaced. Native random range and signed/unsigned remainder operations were reviewed; no matching credit is claimed.

- `tu_0c1c409c.draft.c`: eight translated handlers; 485/504 bytes equal, all literal pools exact. Initializer and movement register/order differences remain. Native conditional branch 0c1c424e enters shared cleanup 0c1c4254, also called from allocator 0c1c40dc; this requires explicit boundary admission review.

- `tu_0c1ad5bc.draft.c`: four newly translated owner-follow/timer callbacks; complete 348-byte span compiles to the correct size with 345 bytes equal. Three functions and all 32 pool bytes match. The remaining timer callback differs in three FPR bytes at 0x0c1ad694, 0x0c1ad698, and 0x0c1ad69c. Direct boundary review passes; no verified C credit.

- `tu_0c1a9814.draft.c`: three translated effect callbacks; full 276-byte span has 274 equal bytes, correct exports and exact pools. Remaining difference is the ground-height load register pair at 0x0c1a98e4/0x0c1a98e6. Direct edges are closed. Requires caller-specific `__slow_mvn=0x0c1fb838`; native float 0x3f4ccccd uses `0.800000012f`. Unverified, no C credit.

- `tu_0c1aca28.draft.c`: 16-effect spawning sequence, allocator, and dispatcher translated. Full span is 272/304 bytes equal with correct exports and all 38 pool bytes exact; sequence and dispatcher are exact. Allocator index promotion and scheduling remain unresolved. Direct edges closed; no verified C credit.

- `tu_0c1a0e68.draft.c`: four translated motion/animation callbacks. Links 300 bytes against the native 304-byte family; the motion body has 124/130 equal bytes. Animation callback caches the spawn helper in R13, unlike retail, shifting subsequent exports. Uses the verified `func_0c19fb0a(LinkedActor *, char)` pointer-return signature. Not an exact section and receives no credit.
