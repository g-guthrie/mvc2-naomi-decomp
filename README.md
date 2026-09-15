# Marvel vs. Capcom 2 — NAOMI

**Goal: 100% byte-identical C reconstruction.** This private repository includes the reference ROMs, Hitachi compiler/linker, and wibo.

## Agents: start here

```sh
git clone https://github.com/g-guthrie/mvc2-naomi-decomp.git
cd mvc2-naomi-decomp
python3 tools/build.py check
```

Read **`build/NEXT.md`**, which that command generates from the current checkout. Do the next work it identifies, verify the complete linked bytes, and repeat toward 100%. [AGENTS.md](AGENTS.md) contains the short working rules.

The command checks the host and selects the runtime. Python 3.10+ is required. Native Linux x86_64 and Apple Silicon macOS are tested. On Apple Silicon, macOS runs the bundled Intel wibo through Rosetta/Intel-app translation automatically; no special terminal or Python setup is needed. If the host check fails, follow its message or use **Actions → Hitachi build → Run workflow** on your pushed branch, then read `NEXT.md` in the build artifact. Windows local builds are unvalidated.

## Live progress

<!-- progress:start -->
**2,166 / 2,424,832 main-image bytes verified from Hitachi C** (0.089326%).

![Byte-weighted progress treemap](assets/progress.svg)

[Active source-unit zoom](assets/active.svg) · [Build evidence](docs/progress.json) · [Interactive treemap](docs/index.html)
<!-- progress:end -->

This section is regenerated from successful builds. Main-image progress counts complete verified C only; copied ROM bytes earn no credit. Code/data bars remain lower bounds while mapping is incomplete. Gray means no reconstructed C, blue means candidate C, green means verified C. Tile area represents bytes; gray subdivisions are display regions, not discovered functions.
