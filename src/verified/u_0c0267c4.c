struct G_0c2d93d0 {
    unsigned char b0;
    unsigned char pad1[3];
    int i4;
    unsigned char b8, b9, b10, b11;
    float f12;
    float arr[129];
};

struct F3_0c0268b8 {
    float pad0;
    float f4, f8, f12;
};

extern struct G_0c2d93d0 dat_0c2d93d0;
extern struct F3_0c0268b8 dat_0c2d95ec;
extern unsigned char dat_0c2d93e0[];
extern void func_0c1fba00(void *p, int v, int n);
extern void func_0c1ecd40(float x);
extern void func_0c1ecce0(int c);
extern void func_0c1ecd30(void *p);
extern void func_0c1eccb0(void);

void func_0c0267c4(void)
{
    func_0c1fba00(&dat_0c2d93d0, 0, 0x214);
}

void func_0c0267ce(void)
{
    int i;
    unsigned int off;
    unsigned char r;
    unsigned char g;
    unsigned char b;

    i = 0;
    while (i < dat_0c2d93d0.i4) {
        dat_0c2d93d0.arr[i] = 1.0f + -((float)i / (float)dat_0c2d93d0.i4);
        i = i + 1;
    }
    off = (unsigned int)(i * 4);
    {
        float z;

        z = 0.0f;
        if (off < 0x204u) {
            do {
                *(float *)((char *)dat_0c2d93d0.arr + off) = z;
                off = off + 4;
            } while (off < 0x204u);
        }
    }
    func_0c1ecd40(dat_0c2d93d0.f12);
    g = (unsigned char)(int)(dat_0c2d95ec.f4 * (float)dat_0c2d93d0.b9);
    r = (unsigned char)(int)(dat_0c2d95ec.f8 * (float)dat_0c2d93d0.b10);
    b = (unsigned char)(int)(dat_0c2d95ec.f12 * (float)dat_0c2d93d0.b11);
    func_0c1ecce0(((int)g << 16) | ((int)r << 8) | (int)b);
}

void func_0c02687c(void)
{
    if (dat_0c2d93d0.b0)
        func_0c1ecd30(dat_0c2d93e0);
    else
        func_0c1eccb0();
}
