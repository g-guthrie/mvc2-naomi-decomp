/* Candidate: no verified twins. Span 0x0c025528 size 348 starts with a 4-byte
 * leftover epilogue (rts; mov.l @r15+,r14); this file starts at 0x0c02552c.
 * Remaining diffs: index (extu.b r4,r5; add #-1; shll2) vs extra frame,
 * register rotation on globals, func_0c025628 fdiv/store order. */

extern unsigned char dat_0c282fda;
extern float dat_0c22a0e0[];
extern int dat_0c22a0ec[];
extern int dat_0c283020;
extern int dat_0c283024;
extern float dat_0c282fd4;
extern float dat_0c283028;
extern int dat_0c28302c;
extern int dat_0c283030;
extern float dat_0c283034;
extern float dat_0c282fa4;

struct Cam_0c2d9260 {
    unsigned char pad0[5];
    unsigned char b5;
    unsigned char pad1[16 - 6];
    float f16;
    unsigned char pad2[88 - 20];
    float f88;
    unsigned char pad3[0xac - 92];
    float fac;
};

extern struct Cam_0c2d9260 dat_0c2d9260;

void func_0c02552c(unsigned char a)
{
    if (!dat_0c282fda) {
        dat_0c283020 = dat_0c22a0ec[a - 1];
        dat_0c282fda = 1;
        dat_0c283024 = 1;
        dat_0c282fd4 = dat_0c22a0e0[a - 1];
        dat_0c283028 = dat_0c282fd4 / (float)dat_0c283020;
    }
    if (dat_0c283020) {
        dat_0c283020 = dat_0c283020 - 1;
        dat_0c2d9260.f16 = dat_0c2d9260.f16 + (float)dat_0c283024 * dat_0c282fd4;
        dat_0c2d9260.f88 = dat_0c2d9260.f16;
        dat_0c283024 = -dat_0c283024;
        dat_0c282fd4 = dat_0c282fd4 - dat_0c283028;
        return;
    }
    dat_0c282fda = 0;
    dat_0c2d9260.b5 = 0;
}

void func_0c0255aa(unsigned char a)
{
    if (!dat_0c282fda) {
        dat_0c28302c = dat_0c22a0ec[a - 1];
        dat_0c282fda = 1;
        dat_0c283030 = 1;
        dat_0c282fd4 = dat_0c22a0e0[a - 1];
        dat_0c283034 = dat_0c282fd4 / (float)dat_0c28302c;
    }
    if (dat_0c28302c) {
        dat_0c2d9260.f16 = dat_0c2d9260.f16 + (float)dat_0c283030 * dat_0c282fd4;
        dat_0c28302c = dat_0c28302c - 1;
        dat_0c2d9260.f88 = dat_0c2d9260.f16;
        dat_0c283030 = -dat_0c283030;
        dat_0c282fd4 = dat_0c282fd4 - dat_0c283034;
        return;
    }
    dat_0c2d9260.b5 = 0;
    dat_0c282fda = 0;
}

void func_0c025628(float unused, int n)
{
    float d;
    struct { float x, y, z; } v;

    (void)unused;
    d = (dat_0c2d9260.fac - dat_0c282fa4) / (float)n;
    v.x = d;
    dat_0c2d9260.fac = dat_0c282fa4 + d;
    dat_0c282fa4 = dat_0c2d9260.fac;
}
