FROM ubuntu:24.04
RUN apt-get update \
    && apt-get install -y --no-install-recommends \
       gcc-13-sh4-linux-gnu binutils-sh4-linux-gnu python3 make ca-certificates \
    && rm -rf /var/lib/apt/lists/*
WORKDIR /project
