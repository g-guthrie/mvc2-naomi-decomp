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

- `tu_0c1a94b0.draft.c`: four allocation/dispatch callbacks translated; complete 356-byte span has 349 equal bytes, correct exports and exact 48-byte pools. Seven bytes differ around the final kind store. Native 0x0c1a94f0 is the preceding return delay slot; the second function begins at 0x0c1a94f2. Direct edges closed with actual exports. Requires `__slow_mvn=0x0c1fb838`; no verified credit.

- `tu_0c1a390c.draft.c`: ten translated lifecycle callbacks; 641/652 bytes equal, correct exports and exact pools. Nine functions match; 11 FPR/load-order bytes remain in trajectory setup `0x0c1a3adc`. Uses existing Actor padding byte at 0x14f; direct edges closed after excluding the mid-function pool continuation from exports. Requires `__slow_mvn=0x0c1fb838`; no verified credit.

- `tu_0c1a7ed8.draft.c`: fourteen translated effect callbacks; 723/728 equal bytes with correct exports and exact pools. Thirteen functions match; five table-index register bytes remain in positioned burst `0x0c1a7f6e`. Owner forwarding at `0x0c1a8078` follows native R5 preservation; signed visibility tests avoid extra promotions. No verified C credit.

- `tu_0c1b61b8.draft.c`: complete owner-follow/visibility callback, 301/304 equal bytes with exact pools. Three facing-test register bytes remain at 0x0c1b6262/0x0c1b6264. Uses shared ActorFlags for the visibility bit; requires `__slow_mvn=0x0c1fb838`. No verified credit.

- `tu_0c1b62e8.draft.c`: translated frame-driven placement callback; 360 linked bytes against the native 356, with 249 equal bytes at native addresses. Recovered shared 20-byte effect row: signed enable, unsigned frame, two scales, and two offsets; nine rows per variant. Final clear and register scheduling remain unresolved. Requires `__slow_mvn=0x0c1fb838`; no verified credit.

- `tu_0c1b6e04.draft.c`: translated parent initialization and sixteen-child allocation loop, including owner failure notification. Links 328 bytes against 320 native; 191 native-position bytes equal. Byte-store addressing and constant scheduling remain unresolved. Requires `__slow_mvn=0x0c1fb838`; no verified credit.

- `tu_0c1bae18.draft.c`: six event/lifetime callbacks, 266/272 equal bytes; five functions and all pools exact. Six register bytes remain in event comparison. Native BT at 0x0c1bae70 tail-calls separate cleanup0x0c1baeea from a frameless function; boundary checker rejects this conditional entry. Keep cleanup entry (also reached by other callbacks); do not hide it to bypass admission. No verified credit.

- `tu_0c1c260c.draft.c`: translated six-item setup loop and resource/position/scale allocator. Full span links260 bytes;89 native-position bytes equal. Setup loop exact; allocator owner lifetime and load scheduling unresolved. Uses shared vector and scale records; no verified credit.

- `tu_0c1c47b4.draft.c`: translated 32-object radial allocator and allocation-failure return. Correct276-byte size and all48 pool bytes match;93 total native-position bytes equal. Shared angle fields used; allocator-call caching and register scheduling remain unresolved. No verified credit.


- `tu_0c1c75a0.draft.c`: four fade/parent-follow callbacks, 247/284 equal bytes; three functions and pools exact. Remaining selection/fade callback differs in field-load and FPR scheduling. Actual start0x0c1c75a0 excludes preceding pool at0x0c1c7590. Boundary admission currently treats pool word0x0c1c7594 as an incoming literal instruction; mapping classification must be reviewed before registration. No verified credit.

- `tu_0c1c690c.draft.c`: selection-position constructor and dispatcher translated; retained void version links312 bytes against316, constructor179/238 bytes equal. Selection byte cached as native; return convention needs caller evidence because suppressed path leaves incidental R0. Pointer-return experiment matches size but leaves unspecified early return, so remains outside retained source. No verified credit.

- UV-scroll family `tu_0c1cb1f0` promoted to verified source after matching its native20-byte local frame and proving its frameless conditional tail entry. The unused12 bytes have no inferred semantics.

- `tu_0c1b7200.draft.c`: three translated attachment callbacks, 347/352 equal bytes; initializer, dispatcher, and pools exact. Five call/flag-register bytes remain in update0x0c1b7200. Requires `__slow_mvn=0x0c1fb838`; no verified credit.

- `tu_0c1bd744.draft.c`: palette-cycle attachment initialization/update/cleanup translated. Links356 bytes against352 native;164 native-position bytes equal. Signed subrecord countdowns and opponent/global gating preserved. Owner/subrecord register allocation and instruction scheduling remain unresolved. Requires `__slow_mvn=0x0c1fb838`; no verified credit.

- `tu_0c1b4f20.draft.c`: owner-state attachment constructor/update translated,333/336 equal bytes; constructor and pools exact. Three owner-flag test register bytes remain at0x0c1b500e/0x0c1b5010. Requires `__slow_mvn=0x0c1fb838`; no verified credit.

- `tu_0c1b5e2c.draft.c`: six frame-following effect callbacks,337/352 equal bytes; five functions and pools exact. Fifteen frame-byte register/load-order bytes remain in update0x0c1b5eca. Owner loading after state increment and direct facing-word read reproduce initializer/copy sequence. Requires `__slow_mvn=0x0c1fb838`; no verified credit.

- `tu_0c1b40b8.draft.c`: complete frame-event child-spawning callback,348/356 equal bytes with exact pools. Eight constant-order and final-call register bytes remain. Initialization, signed event-mask handling, child setup, and cleanup transitions translated; requires `__slow_mvn=0x0c1fb838`. No verified credit.

- `tu_0c1c9210.draft.c`: three interpolation/creation/lifetime routines translated. Links352 bytes against356 native; signed index division and temporary-register scheduling unresolved. Native positions use paired three-float endpoints and a30-step interpolation. No verified credit.

- `tu_0c1c9c0c.draft.c`: resource/position/angle constructor translated,292/332 equal bytes at correct size. Uses shared angle array for first component and scalar aliases for remaining components; table-pointer registers and literal order remain unresolved. No verified credit.

- `tu_0c1b3874.draft.c`: three ground/air attachment callbacks translated. Links360 bytes against368 native; cached-owner and animation-selector local placement remain unresolved. Preserves initialization copy order, ground-relative offset, airborne transition, and cleanup. Requires `__slow_mvn=0x0c1fb838`; no verified credit.

- `tu_0c1c7960.draft.c`: five rotating-selection construction/update/lifetime callbacks translated. Links352 bytes against356 native; compiler merges the two angle stores while native keeps separate stores. Resource selection, delay, and cleanup behavior preserved; no verified credit.

- `tu_0c1c2348.draft.c`: four placement/scale/lifetime callbacks translated. Links352 bytes against356 native; table indexing and float temporary scheduling remain unresolved. Preserves signed timer shifts, scaled horizontal offset, and cleanup conditions. No verified credit.

- `tu_0c1c3568.draft.c`: three paired setup/allocation routines translated. Links344 bytes against352 native; first setup body exact, second allocator guard/local layout unresolved. Preserves owner flag mask at0x414, resource indices, vector initialization, and angle constants. No verified credit.

- `tu_0c1d5960.draft.c`: four resource/UV callbacks translated. Complete native span424 bytes (both pools), current linked428. The accompanying `.unit.json` preserves the full extent; bare description stops at the intermediate pool and is insufficient. UV pointer lifetimes and signed remainder lowering remain unresolved. No verified credit.

- `tu_0c1dae48.draft.c`: four timing-record dispatcher/walker/sine-update routines translated. Links344 bytes against352 native. Preserves variable record stride, six-state rollover, signed counters, and16-bit angle conversion; dispatcher/local instruction layout unresolved. No verified credit.

- `tu_0c1c2710.draft.c`: complete slot-transition, scaling, and visibility callback translated. Full descriptor covers388 native bytes and both pools; current linked386 bytes,327/336 instruction bytes equal. Vector-copy setup and final flag registers differ; final two padding bytes absent. Do not shorten the span for credit. No verified credit.

- `tu_0c1c21d8.draft.c`: pulsing-scale and parent-copy callbacks translated.338/368 bytes equal;372 linked bytes. Parent-copy body exact; native divisor-one-plus-one sequence, table-copy ordering, and float-register lifetimes remain unresolved. No verified credit.

- `tu_0c1c3c00.draft.c`: roster-member indicator allocation and dispatch translated. Links388 bytes against392 native; native mask-test lowering and saved-register layout unresolved. Preserves one/three-member selection, roster refresh calls, per-member mask checks, and success-only slot counting. No verified credit.

- `tu_0c1c6df8.draft.c`: resource constructor, dispatcher, and bounded rotation update translated.316/392 equal bytes at correct total size; rotation assignment/test lowering and literal placement unresolved. Preserves actor-slot selection, resource branches, table angles, and sound setup. No verified credit.
