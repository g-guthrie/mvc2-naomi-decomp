/* 72-byte parent. SHC emits JSR/@Rn plus .DATA.L; BSR $+H'delta reaches the imported leaves. */
int func_0c047b0c(int a, int w, short *local);
int func_0c047796(int a, unsigned char *table, unsigned char *obj, int w);

int func_0c04701c(int a, unsigned char *table, unsigned char *obj)
{
    short local;
    obj[0] = 0;
    if ((unsigned char)func_0c047b0c(
            a, *(short *)(table + ((unsigned char)obj[2] * 2) + 8), &local))
        return func_0c047796(a, table, obj, local);
    return 0;
}
