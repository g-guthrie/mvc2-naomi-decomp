/* Candidate: differs from retail in prologue register choice (a/b in r9/r10
 * instead of stack), pool layout, and a few fmov destinations. */
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

void func_0c026e50(int a, int b)
{
    struct Rec_0c23a40c *g;
    float s, t;
    float z;
    float q;
    float p;
    int i;
    int x;
    int n10;
    int n3;
    unsigned u4;

    g = &dat_0c23a40c;
    z = 0.0f;
    g->i0 = 1;
    g->f4 = 194.0f;
    g->f8 = 426.0f;
    g->f12 = 0.96f;
    g->f24 = z;
    g->f28 = z;
    q = 0.75f;
    p = 0.25f;
    g->f32 = q;
    g->f36 = p;
    g->f16 = q;
    g->f20 = p;
    g->i40 = 0;
    g->f44 = 1.0f;
    g->i48 = -1;
    g->i52 = 5;
    g->i56 = -1;
    g->i60 = 0;
    func_0c1f1f10(g);

    g->f4 = 274.0f;
    g->f24 = q;
    g->f28 = z;
    g->f32 = 1.0f;
    g->f36 = p;
    g->f16 = p;
    g->f20 = p;
    func_0c1f1f10(g);

    g->f4 = 298.0f;
    g->f24 = z;
    g->f28 = z;
    g->f32 = p;
    g->f36 = p;
    g->f16 = p;
    g->f20 = p;
    func_0c1f1f10(g);

    g->f4 = 314.0f;
    g->f24 = z;
    g->f28 = p;
    g->f32 = 0.5f;
    g->f36 = 0.5f;
    g->f16 = 0.5f;
    g->f20 = p;
    func_0c1f1f10(g);

    g->f4 = 442.0f;
    g->f24 = q;
    g->f28 = z;
    g->f32 = 1.0f;
    g->f36 = p;
    g->f16 = p;
    g->f20 = p;
    func_0c1f1f10(g);

    g->f4 = 274.0f;
    g->f12 = 0.95f;
    g->f16 = p;
    g->f20 = p;
    n10 = 10;
    n3 = 3;
    u4 = 4u;
    i = 2;
    do {
        x = a % n10 + 2;
        s = (float)(x & n3) * p;
        t = (float)((unsigned)x % u4 + 1) * p;
        a = (int)((unsigned)a % (unsigned)n10);
        g->f4 = g->f4 - 16.0f;
        g->f24 = s;
        s = s + p;
        g->f28 = t;
        t = t + p;
        g->f32 = s;
        g->f36 = t;
        func_0c1f1f10(g);
    } while (--i != 0);

    g->f4 = 442.0f;
    g->f16 = p;
    g->f20 = p;
    i = 6;
    do {
        x = b % n10 + 2;
        s = (float)(x & n3) * p;
        t = (float)((unsigned)x % u4 + 1) * p;
        b = (int)((unsigned)b % (unsigned)n10);
        g->f4 = g->f4 - 16.0f;
        g->f24 = s;
        s = s + p;
        g->f28 = t;
        t = t + p;
        g->f32 = s;
        g->f36 = t;
        func_0c1f1f10(g);
    } while (--i != 0);
}
