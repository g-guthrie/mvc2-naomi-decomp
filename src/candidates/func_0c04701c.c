/* Matches retail except the two BSR words: SHC emits BSR only for a callee in
 * the same translation unit, so this function joins its unit once the object
 * spanning 0x0c04701c to the pool at 0x0c047b2e is written as one file. */
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
