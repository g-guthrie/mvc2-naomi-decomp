# Build inputs (not distributed)

Three things this build needs are **not ours to redistribute**, so they are
not in this repository. Supply them yourself from material you own or have
licensed, at exactly these paths:

    orig/mvsc2.zip                  Marvel vs Capcom 2 NAOMI ROM set (Capcom)
    toolchain/hitachi-shc-5.1r08/   Hitachi SH C/C++ compiler 5.1r08
    toolchain/naomi-sdk/lib/        Sega NAOMI SDK libraries

Nothing else changes. Every tool reads those same paths, so once the files
are in place the build, the unit scanner and the evidence tooling all work
exactly as before:

    python3 tools/build.py check --clean --jobs 2

The manifests that stay in the repo pin what each file must be:

    toolchain/hitachi-shc-5.1r08.json   per-file hashes for the compiler
    toolchain/naomi-sdk.json            per-file hashes for the SDK, and the
                                        archive.org item the libraries came from
    orig/*.json                         ROM set hashes

So if you supply the wrong build of anything, the tooling will tell you
rather than producing a quietly different result.

`toolchain/wibo/` is still in the repo: wibo is MIT-licensed and
redistributable.

## CI

The Hitachi build workflow skips its build and evidence steps when these
inputs are absent, which is the normal state for a fresh clone. It does not
fail. To run the real build in CI you would need to supply the inputs to the
runner from somewhere private and gate the steps on that.
