/* Four handlers sharing the pool at 0x0c0ec108. func_0c0ec040 and
 * func_0c0ec064 match. func_0c0ec088 at 0x0c0ec0bc and func_0c0ec0ca at
 * 0x0c0ec0fa: retail loads the case-2 constant with `mov #2,r3` where SHC
 * 5.0R31 emits `mov #2,r2`. Named locals, pointer locals and store-order
 * variants did not change the register. */
struct Obj_tu2_02 {
    unsigned char pad0[5];
    unsigned char b5;
    unsigned char b6;
    unsigned char b7;
    unsigned char pad1[0x1a3 - 8];
    char b1a3;
    unsigned char pad2[0x1e9 - 0x1a4];
    unsigned char b1e9;
    unsigned char pad3[0x4c9 - 0x1ea];
    char b4c9;
};

extern void func_0c045248(struct Obj_tu2_02 *, int);

void func_0c0ec040(struct Obj_tu2_02 *o)
{
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    switch (o->b4c9) {
    case 0:
        o->b1e9 = 5;
        break;
    case 1:
        o->b1e9 = 5;
        break;
    case 2:
        o->b1e9 = 5;
        break;
    }
    func_0c045248(o, 29);
}

void func_0c0ec064(struct Obj_tu2_02 *o)
{
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    switch (o->b4c9) {
    case 0:
        o->b1e9 = 5;
        break;
    case 1:
        o->b1e9 = 5;
        break;
    case 2:
        o->b1e9 = 5;
        break;
    }
    func_0c045248(o, 29);
}

void func_0c0ec088(struct Obj_tu2_02 *o)
{
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    switch (o->b4c9) {
    case 0:
        o->b1e9 = 0;
        o->b1a3 = 1;
        break;
    case 1:
        o->b1e9 = 1;
        goto z;
    case 2:
        o->b1e9 = 2;
    z:
        o->b1a3 = 0;
        break;
    }
    func_0c045248(o, 21);
}

void func_0c0ec0ca(struct Obj_tu2_02 *o)
{
    o->b5 = 0;
    o->b7 = 0;
    o->b6 = 0;
    switch (o->b4c9) {
    case 0:
        o->b1e9 = 0;
        goto a;
    case 1:
        o->b1e9 = 1;
        goto a;
    case 2:
        o->b1e9 = 2;
    a:
        o->b1a3 = 1;
        break;
    }
    func_0c045248(o, 21);
}
