/* Four handlers sharing the pool at 0x0c0ec108. func_0c0ec040 and
 * func_0c0ec064 are instruction-identical to retail (their pool displacements
 * shift because the later functions are 4 bytes longer). func_0c0ec088 and
 * func_0c0ec0ca: retail merges the case-1 tail into `mov.w 0x1a3,r0;
 * mov.b r5,@(r0,r4)` (0x0c0ec0b6, 0x0c0ec0f4) where SHC 5.0R31 emits
 * `bra; add #-70,r0`, and loads the case-2 constant into r3 where ours uses
 * r2. Switch, if-chain and reordered-store spellings did not change it. */
struct Obj_tu2_02 {
    unsigned char pad0[5];
    unsigned char b5;
    unsigned char b6;
    unsigned char b7;
    unsigned char pad1[0x1a3 - 8];
    unsigned char b1a3;
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
        o->b1a3 = 0;
        break;
    case 2:
        o->b1e9 = 2;
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
        o->b1a3 = 1;
        break;
    case 1:
        o->b1e9 = 1;
        o->b1a3 = 1;
        break;
    case 2:
        o->b1e9 = 2;
        o->b1a3 = 1;
        break;
    }
    func_0c045248(o, 21);
}
