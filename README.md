# Marvel vs. Capcom 2 — NAOMI

A decompilation of the Sega NAOMI release, built with the original Hitachi
SH C compiler and verified against the reference ROMs.

```sh
python3 tools/build.py check
```

The check verifies the ROMs, compiles every registered C unit with the bundled
Hitachi toolchain, links each to its original address, and requires the result
to match retail byte for byte. Nothing is downloaded and nothing needs
installing.

`config/mapping.json` records which bytes are code and which are data, each
range carrying the evidence that decided it. `config/units.json` registers the
C units; a unit is credited only once every linked byte, section size and
export address matches. See [AGENTS.md](AGENTS.md) and
[docs/TOOLCHAIN.md](docs/TOOLCHAIN.md).

[Builds and exact-commit evidence](https://github.com/g-guthrie/mvc2-naomi-decomp/actions/workflows/build.yml)

## Progress

<!-- progress:start -->
| Track | Progress | Bytes |
| --- | --- | ---: |
| Map | `████████████████████████████░░░░` **89.716%** | 2,175,466 / 2,424,832 |
| Code | `░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░` **0.140%** | 2,402 / 1,718,456 |
| Data | `███████████████████████████████░` **99.713%** | 455,698 / 457,010 |
| [Decomp](config/units.json) | `██████░░░░░░░░░░░░░░░░░░░░░░░░░░` **18.892%** | 458,100 / 2,424,832 |
<!-- progress:end -->

Map is the share of the main image reviewed as code or data. Code and Data are
the shares of each that compiled C reproduces exactly, and Decomp is both
together against the whole image.

[![Hitachi build](https://github.com/g-guthrie/mvc2-naomi-decomp/actions/workflows/build.yml/badge.svg)](https://github.com/g-guthrie/mvc2-naomi-decomp/actions/workflows/build.yml)
