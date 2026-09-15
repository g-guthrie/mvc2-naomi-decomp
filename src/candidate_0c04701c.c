/* Candidate only: GCC 13 SH-4 -O2 does not reproduce this sequence.
 * Original at 0x0c04701c..0x0c047064 (72 bytes) saves r14/pr, uses 12 stack
 * bytes, stores 0 to *r6, calls 0x0c047b0c then maybe 0x0c047796.
 * Not included in the strict matching link.
 */

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
