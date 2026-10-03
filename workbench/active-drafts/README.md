# Complete, unverified decompilation drafts

These sources preserve unfinished work for local and cloud agents. They are not registered in `config/units.json` and contribute **zero** coverage. Existing verified code remains under `src/verified/`.

Each lane has a manifest with the source hash, reviewed section extent, and comparison evidence. Historical comparison counts are observations from prior trials, not certification of the packaged source against current headers. Rerun the bundled compiler before using them. Lane-specific trial headers, when present, are research inputs; reconcile field definitions with `src/include/objects.h` before promotion.

For a draft that uses the current shared header:

```sh
python3 tools/diff_unit.py workbench/active-drafts/solo/tu_0c0d8fe8.inline_offset.c
```

Portable expected-unit descriptors preserve the complete reviewed boundary:

```sh
python3 workbench/compare_draft.py workbench/active-drafts/lane-c/tu_0c1cf17c.unit.json --output build/draft-proof.json
```

The wrapper uses the original bundled compiler, linker, runtime import resolver, and byte comparer. It never registers a source or changes coverage. An exact diagnostic still needs ownership/boundary review and the full repository check before promotion.

For sections whose last function continues across an interior pool, use the reviewed whole extent from the manifest rather than accepting a truncated inferred extent. Preserve actual entry points and all interior pools; never add artificial exports to make an extent match.

Only promote a source after every byte of its whole linked section matches retail. Move it under `src/verified/`, register it with the original tools, review released data ownership, and run `python3 tools/build.py check` with registry/source inputs frozen. Preserve nonmatching work here without registering it or counting exact fragments as new verified units.

The recovery archive linked from the cloud-agent documentation preserves additional historical sources and experiments. These active drafts are the focused starting points; the archive is not a set of verified registrations.
