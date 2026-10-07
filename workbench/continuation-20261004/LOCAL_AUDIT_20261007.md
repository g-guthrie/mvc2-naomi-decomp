# Local consolidation — October 7, 2026

The audit checked 80 available NAOMI checkout registries and four standalone
draft directories. PS2 checkouts were identified and excluded. Historical
`verified` labels were compared against current ownership and recompiled with
the bundled compiler before integration.

21 complete sections were accepted, adding **5,578 executable C bytes** over
the active checkout's 391,482-byte starting point. Together with the 16 local
commits awaiting publication, this adds **8,734 executable C bytes** over
published checkpoint `1e9d1e20` (388,326 bytes). A further concurrent remote
match (`86bef212`, `ud1_02`) contributes 338 bytes, bringing the complete
published checkpoint gain to **9,072 bytes**.

Accepted sections: `tu2_10`, `ub3_03`, `ub6_01`, `ud0_05`, `ud2_11`,
`u_0c025a9c`, `u06808c`, `tu_0c0676fc`, `tu_0c067f4c`, `tu_0c06f92c`,
`tu_0c075ae8`, `tu_0c07f534`, `tu_0c081c90`, `tu_0c091e84`, `tu_0c0a7304`,
`tu_0c0b99a0`, `tu_0c0b9af4`, `tu_0c0d6ce8`, `tu_0c1059c0`,
`tu_0c150624`, and `tu_0c1aebb8`.

The recovered source includes command checks, motion and landing states,
paired actor transitions, camera bounds and timed animation records. Obsolete
field names were reconciled with current layouts; duplicated input-record
views were removed where the shared actor layout preserved the exact match.
The expanded `ud0_05` replaces the already credited `tu_0c05b37c` predecessor;
those bytes are counted once. Five shared layout assertions accompany the
recovery. The no-argument `func_0c025762` declaration was checked against the
callee, which overwrites R4 before reading it.

Older exact constructors already contained in larger candidate translations
were not substituted for the newer complete source. Incoming branches, shared
literal pools, unreviewed extents and failed current-header compilation kept
other historical claims out of verified credit. The `tu_0c173f00` byte-view
improvement remains a candidate (872/876 bytes).

Commits `25e131b2` and `86bef212`, published separately during the audit, were
merged without losing the initializer, stack-layout and actor-follow callback
improvements. Both recovery journals were retained.

## Validation and accounting

- 148 tests and all type contracts passed.
- The header checkpoint rebuilt all 2,031 units with the bundled Hitachi toolchain.
- The merged checkpoint passed again: two changed units rebuilt, 2,029 cached
  artifacts reverified; 1,906 verified configuration units.
- Main image: 2,424,832 bytes exact; program ROM: 4,194,304 bytes exact.
- Verified executable C: **397,398 / 1,949,866 = 20.381%**.
- Matched reviewed code: **31.181%**, including SDK and candidate contributions.
- Combined image coverage: **40.916%**, including data, SDK and candidate fragments.

The denominator changed as literal data was classified; that is not translated
code. These percentages describe different measures, not competing totals.

## Preserved research

The publication release carries `local-source-delta-20261007.tar.gz`: 2,066
additional file versions, deduplicated to 1,826 objects. The existing October 4
archive was downloaded and its published SHA-256 verified before comparison.
The audit examined 100,326 source/configuration/research entries outside the
active checkout; 98,260 were already represented in main or the earlier archive.
Unchanged historical entries were recognized using recorded size and modification
times predating capture; changed/new contents were hashed. Metadata/index reuse
is recorded explicitly. No file reads remained unresolved. All delta object
hashes and a sample restoration passed.

The archive is unverified research, not extra completed decompilation. Current
source, older source snapshots and unfinished experiments remain distinguishable.
