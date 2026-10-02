/* Candidate: two-instruction sts.l pr / mov.w 0x0d50 swap at 0c0270ca, and
 * mov #44 vs mov #-1 order at 0c027102. Pool matches. */
struct Rec_0c23a40c {
    int i0;
    float f4, f8, f12;
    float f16, f20;
    float f24, f28, f32, f36;
    int i40;
    float f44;
    int i48, i52, i56, i60;
};

extern struct Rec_0c23a40c dat_0c23a40c;
extern void func_0c1f1f10(struct Rec_0c23a40c *);

void func_0c0270b8(void)
{
    struct Rec_0c23a40c *g;
    float z;
    float one;
    float a;
    float b;
    float c;
    float half;

    g = &dat_0c23a40c;
    z = 0.0f;
    one = 1.0f;
    g->i0 = 0x0d50;
    g->f4 = 40.0f;
    g->f8 = 394.0f;
    g->f12 = 0.96f;
    g->f24 = z;
    g->f28 = z;
    g->f32 = one;
    a = 0.625f;
    g->f36 = a;
    g->f16 = one;
    g->f20 = a;
    {
        int m1;
        m1 = -1;
        g->i40 = 0;
        g->f44 = one;
        g->i48 = m1;
        g->i52 = 5;
        g->i56 = m1;
        g->i60 = 0;
    }
    func_0c1f1f10(g);

    g->f4 = 222.0f;
    g->f8 = 448.0f;
    g->f24 = z;
    g->f28 = a;
    g->f32 = one;
    b = 0.75f;
    g->f36 = b;
    g->f16 = one;
    c = 0.125f;
    g->f20 = c;
    func_0c1f1f10(g);

    g->f4 = 350.0f;
    g->f24 = z;
    g->f28 = b;
    half = 0.5f;
    g->f32 = half;
    g->f36 = 0.875f;
    g->f16 = half;
    g->f20 = c;
    func_0c1f1f10(g);
}
