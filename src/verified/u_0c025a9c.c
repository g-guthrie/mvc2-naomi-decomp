/* Assembled by tools/clone.py from verified twins. */

struct Glob_0c2d9260_cam {
    unsigned char pad0[12];
    float f12, f16;
    unsigned char pad1[0x88 - 20];
    float f88, f8c, f90, f94, f98, f9c;
    unsigned char pad2[0xa8 - 0xa0];
    float fa8;
};

struct PairF {
    float f0, f4;
};

extern struct Glob_0c2d9260_cam dat_0c2d9260;

void func_0c025a9c(float *a, float *b)
{
    if (*a + 320.0f > dat_0c2d9260.f9c) {
        *a = dat_0c2d9260.f9c + -320.0f;
        *b = dat_0c2d9260.f9c + -320.0f;
    }
    if (*a + -320.0f < dat_0c2d9260.f98) {
        *a = dat_0c2d9260.f98 + 320.0f;
        *b = dat_0c2d9260.f98 + 320.0f;
    }
}

void func_0c025ad6(struct PairF *a)
{
    if (95.0f > a->f4)
        a->f4 = 95.0f;
    if (!(900.0f > a->f4))
        a->f4 = 900.0f;
}

void func_0c025af6(void)
{
    dat_0c2d9260.f8c = dat_0c2d9260.f12 + 320.0f;
    dat_0c2d9260.f88 = dat_0c2d9260.f12 + -320.0f;
    dat_0c2d9260.fa8 = dat_0c2d9260.f16 + 98.400002f;
    dat_0c2d9260.f90 = dat_0c2d9260.fa8 + 240.0f;
    dat_0c2d9260.f94 = dat_0c2d9260.fa8 + -240.0f;
}
