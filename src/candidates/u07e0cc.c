struct Actor {
    unsigned char pad0[6];
    unsigned char b6;
    unsigned char pad1[28 - 7];
    short s28;
    unsigned char pad2[52 - 30];
    float f52, f56;
    unsigned char pad3[92 - 60];
    float f92, f96, f100, f104, f108;
    unsigned char pad4[0x12c - 112];
    unsigned char b12c;
    unsigned char pad5[0x130 - 0x12d];
    short w130;
    unsigned char pad6[0x149 - 0x132];
    unsigned char b149;
    unsigned char pad7[0x1f9 - 0x14a];
    unsigned char b1f9;
    unsigned char pad8[0x41c - 0x1fa];
    float f41c;
};
extern unsigned char dat_0c2f8338;
extern void func_0c02a0c4(struct Actor *, int, int);
extern char func_0c02a026(struct Actor *);
extern void func_0c0346da(struct Actor *, int);
extern void func_0c192ec8(struct Actor *, int);
struct G_2d9260 { unsigned char pad[5]; unsigned char b5, b6; };
extern struct G_2d9260 dat_0c2d9260;

void func_0c07e0cc(struct Actor *a)
{
    float vx, ax;
    a->b12c = 0;
    a->b149 = 0xff;
    if (dat_0c2f8338 >= 2) {
        a->b6++;
        a->b12c = 1;
        a->b1f9 = 2;
        a->s28 = 32;
        a->f100 = a->f52;
        vx = -640.0f;
        ax = 20.0f;
        if (a->w130) {
            vx = 640.0f;
            ax = -20.0f;
        }
        a->f52 += vx;
        a->f92 = ax;
        a->f104 = 0.0f;
        a->f56 = a->f41c + 548.571411133f;
        a->f96 = -17.142857f;
        a->f108 = 0.0f;
        func_0c02a0c4(a, 18, 0);
    }
}

void func_0c07e150(struct Actor *a)
{
    func_0c02a026(a);
    a->f52 += a->f92;
    a->f92 += a->f104;
    a->f56 += a->f96;
    a->f96 += a->f108;
    if (a->f56 < a->f41c) {
        a->b6++;
        a->b1f9 = 0;
        a->f52 = a->f100;
        a->f56 = a->f41c;
        func_0c0346da(a, 49);
        func_0c192ec8(a, 0);
        dat_0c2d9260.b5 = 1;
        dat_0c2d9260.b6 = 1;
        func_0c02a0c4(a, 18, 1);
    }
}
