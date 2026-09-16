/* Six functions here (0x0c05a914-0x0c05aa28, matching the assignment's 278
 * bytes) share one literal pool, but a genuine reviewed code range sits
 * inside that pool at 0x0c05aa3c (6 bytes, "CFG walk from 0x0c05aa3c" in
 * config/mapping.json) with unreferenced padding around it; the pool itself
 * runs to 0x0c05aa64 (the next unrelated function, whose own pool starts
 * fresh elsewhere) and holds exactly the 9 addresses and 3 shorts these six
 * functions need (e.g. func_0c02a026's pool slot at 0x0c05aa44 is shared by
 * func_0c05a914, func_0c05a99c and func_0c05aa06 alike, so all six are one
 * retail unit). describe() cannot walk through that embedded code range, so
 * the tool's own P section always stops at 342 bytes short of what these six
 * functions actually need; I have no tool that edits config/mapping.json to
 * bridge it. Every function here compiles to the right shape and instruction
 * count; the two spots I could not force to retail's exact register (a
 * scratch-register swap in func_0c05a99c, and r0 vs r3 for the tail jmp in
 * func_0c05a9e8) are noted at each function. Registering as a candidate. */

struct Sub2a4_ub8_03 { unsigned char pad[3]; unsigned char b3; };

struct Obj_ub8_03 {
    unsigned char pad0[2];
    unsigned char b2;
    unsigned char pad1[3];
    unsigned char b6;
    unsigned char pad2[0x141 - 7];
    unsigned char b141;
    unsigned char pad3[0x19e - 0x142];
    unsigned char b19e;
    unsigned char pad4[0x1a1 - 0x19f];
    unsigned char b1a1;
    unsigned char pad5[0x1ac - 0x1a2];
    unsigned short w1ac;
    unsigned char pad6[0x1c4 - 0x1ae];
    int i1c4;
    unsigned char pad7[0x2a4 - 0x1c8];
    struct Sub2a4_ub8_03 sub2a4;
};

struct Table_ub8_03 { unsigned char pad[124]; short arr[1]; };

extern struct Table_ub8_03 *dat_0c2f83f8;
extern char func_0c02a026(struct Obj_ub8_03 *);
extern void func_0c0437b8(struct Obj_ub8_03 *);
extern void func_0c02a0c4(struct Obj_ub8_03 *, int, int);
extern void *dat_0c23f9b0[];
extern void func_0c056bb8(struct Obj_ub8_03 *);
extern void func_0c0432ca(struct Obj_ub8_03 *);
extern void func_0c048bb0(struct Obj_ub8_03 *, int);
extern int func_0c1321b8(struct Obj_ub8_03 *);

void func_0c05a914(struct Obj_ub8_03 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}

void func_0c05a936(struct Obj_ub8_03 *a)
{
    ((void (*)(struct Obj_ub8_03 *))dat_0c23f9b0[a->b6])(a);
}

void func_0c05a948(struct Obj_ub8_03 *a)
{
    a->b6 = a->b6 + 1;
    func_0c056bb8(a);
    func_0c0432ca(a);
    func_0c048bb0(a, 8);
    a->b1a1 = 43;
    a->w1ac = 0;
    a->b19e = 0;
    a->i1c4 = 0;
    dat_0c2f83f8->arr[a->b2]++;
    func_0c02a0c4(a, 21, 9);
}

void func_0c05a99c(struct Obj_ub8_03 *a)
{
    struct Sub2a4_ub8_03 *p;

    p = &a->sub2a4;
    func_0c02a026(a);
    if (a->b141) {
        a->b141 = 0;
        a->b6 = a->b6 + 1;
        p->b3 = 0;
        if (func_0c1321b8(a) == 0)
            func_0c0437b8(a);
    }
}

void func_0c05a9e8(struct Obj_ub8_03 *a)
{
    struct Sub2a4_ub8_03 *p = &a->sub2a4;

    if (p->b3 == 0)
        func_0c02a026(a);
    else {
        a->b6 = a->b6 + 1;
        func_0c02a0c4(a, 21, 10);
    }
}

void func_0c05aa06(struct Obj_ub8_03 *a)
{
    if (func_0c02a026(a) < 0)
        func_0c0437b8(a);
}
