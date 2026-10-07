# Parked near-miss units (2026-10-07 recovery thread)

Work-in-progress sources that did not reach an exact match and were not
registered. Registering them as candidates would release literal pools that
are currently owned by verified bulk/rest/ptrtab units, lowering the verified
total, so they are kept here instead.

- `sources/` — the latest source per unit (`tu_<start>.c`). Several are
  size-exact and within a few register choices of retail; see
  `parked-notes.txt` for the per-unit status and what still differs.
- `objects_l2c4_w342_w360.patch` — Actor fields needed by `tu_0c12fab0.c`
  and `tu_0c13015c.c` (`int l2c4` at 0x2c4 replacing the unused `s2c6`,
  `w342`, `w360`). Apply it before diffing those units.
- `lessons.txt` — SHC spelling patterns found during this thread.

Additional patterns confirmed late in the thread:
- A small int that retail keeps in a callee-saved register although it is
  not live across a call: declare it `unsigned int`.
- A mask constant loaded before the field offset it is later derived from
  (`mov.w 0x360,r4; mov r4,r0; add #-18,r0`): write the test as an early
  `if(!(...)){if(!(x&M)&&!(y&M))goto skip;}`.
- Facing compares `a->f52<a->p20c->f52` load the actor's own field first.

Resume with `python3 tools/diff_unit.py <copy under src/candidates>` or the
usual clone/diff loop; nothing here is a build input.
