/* Hitachi -O1 `if (a==b) return 1; return 0` emits MOVT; RTS; NOP. */
int eq_if(int a, int b)
{
    if (a == b)
        return 1;
    return 0;
}
