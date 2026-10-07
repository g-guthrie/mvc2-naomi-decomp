/* SDK table entry store; matched with a label before the stores (r2/r3 choice). Trailing 28-byte alignment pad excluded. */
struct Tbl_0c3b22e0 {
    int f0;
    int f4;
    struct { int a; int b; } e[1];
};
extern struct Tbl_0c3b22e0 dat_0c3b22e0;

int func_0c2255a0(int i)
{
    goto s;
s:
    dat_0c3b22e0.e[i].a = dat_0c3b22e0.f4;
    dat_0c3b22e0.e[i].b = 0;
    return 0;
}
