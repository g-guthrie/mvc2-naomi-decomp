/* Candidate: r2/r3 allocation for the element address and the loaded f4
   value is swapped relative to retail (9 words differ); trailing 28-byte
   alignment pad is excluded from the extent. */
struct Tbl_0c3b22e0 {
    int f0;
    int f4;
    struct { int a; int b; } e[1];
};
extern struct Tbl_0c3b22e0 dat_0c3b22e0;

int func_0c2255a0(int i)
{
    dat_0c3b22e0.e[i].a = dat_0c3b22e0.f4;
    dat_0c3b22e0.e[i].b = 0;
    return 0;
}
