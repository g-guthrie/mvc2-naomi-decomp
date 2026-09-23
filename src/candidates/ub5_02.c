/* The full 380-byte section links at retail. Five functions and the 66-byte
 * pool are exact. func_0c12d8ac matches 156/158 bytes; its indirect tail
 * jump loads the target into r3 while retail uses r1 at 0x0c12d944-946.
 * The counter-gated calls must stay inside the positive-counter branch. */
struct P456_ub5_02 { unsigned char pad[604]; short w604; };

struct Nested676_ub5_02 { unsigned char pad[12]; signed char b12; };

struct Obj_ub5_02 {
    unsigned char pad0[28];
    short w28;
    unsigned char pad1[304 - 30];
    short w304;
    unsigned char pad2[321 - 306];
    signed char b321;
    unsigned char b322;
    unsigned char pad3[413 - 323];
    char b413;
    unsigned char pad4[456 - 414];
    struct P456_ub5_02 *p456;
    unsigned char pad5[466 - 460];
    unsigned char b466;
    unsigned char pad6[490 - 467];
    unsigned char b490;
    unsigned char pad7[493 - 491];
    unsigned char b493;
    unsigned char pad8[503 - 494];
    unsigned char b503;
    unsigned char pad9[676 - 504];
    struct Nested676_ub5_02 n676;
};

typedef void (*handler1_ub5_02)(struct Obj_ub5_02 *);
typedef void (*handler2_ub5_02)(struct Obj_ub5_02 *, struct P456_ub5_02 *);

extern handler1_ub5_02 dat_0c24de40[];
extern handler2_ub5_02 dat_0c24de4c[];
extern void func_0c0426c2(struct Obj_ub5_02 *, int);
extern void func_0c0427be(struct Obj_ub5_02 *, int);
extern void func_0c025900(struct Obj_ub5_02 *, int, int);
extern void func_0c02a0c4(struct Obj_ub5_02 *, int, int);
extern char func_0c02a026(struct Obj_ub5_02 *);
extern void func_0c0437b8(struct Obj_ub5_02 *);
extern int func_0c0427f2(struct Obj_ub5_02 *);
extern int func_0c042780(struct P456_ub5_02 *);
extern void func_0c03edcc(struct Obj_ub5_02 *);
extern void func_0c03f004(struct Obj_ub5_02 *);

void func_0c12d81c(struct Obj_ub5_02 *a, struct Obj_ub5_02 *b)
{

    func_0c0426c2(b, 56);
    func_0c0427be(a, 2);
    b->w28 = 0;
    func_0c025900(a, 5, 5);
    func_0c02a0c4(a, 15, 2);
}

void func_0c12d856(struct Obj_ub5_02 *a, struct Obj_ub5_02 *b)
{
    func_0c0426c2(b, 56);
    func_0c0427be(a, 2);
    func_0c025900(a, 5, 5);
    func_0c02a0c4(a, 15, 4);
}

void func_0c12d88a(struct Obj_ub5_02 *a)
{
    a->b490 = 1;
    a->b493 = 3;
    dat_0c24de40[a->b503](a);
}

void func_0c12d8ac(struct Obj_ub5_02 *a)
{
    struct Nested676_ub5_02 *n = &a->n676;
    struct P456_ub5_02 *p = a->p456;

    if (func_0c02a026(a) < 0 && n->b12 <= 0) {
        a->b466 ^= 1;
        a->w304 = a->b466;
        a->b413 = -128;
        a->b493 = 0;
        func_0c0437b8(a);
        return;
    }
    if (n->b12 > 0) {
        if (func_0c0427f2(a))
            a->b322 = 1;
        p->w604--;
        if (func_0c042780(p)) {
            n->b12 = -1;
            func_0c02a0c4(a, 15, 1);
        }
    }
    dat_0c24de4c[a->b321 >> 1](a, p);
}

void func_0c12d94a(struct Obj_ub5_02 *a)
{
    func_0c03edcc(a);
}

void func_0c12d950(struct Obj_ub5_02 *a)
{
    func_0c03f004(a);
}
