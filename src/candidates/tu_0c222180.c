/* SDK aligned double-size allocation; matched with a label before the size
   computation (r2/r3 choice). Trailing alignment pad excluded. */
extern int func_0c227140(int kind, unsigned int size, unsigned int *out);
extern unsigned int func_0c227180(unsigned int addr);

int func_0c222180(unsigned int size, unsigned int *first, unsigned int *second)
{
    unsigned int aligned; int result; unsigned int base;
    goto a;
a:
    aligned = ((size & 31) == 0) ? size : (size + 32) & ~31;
    *first = 0;
    result = func_0c227140(2, aligned << 1, first);
    if (result == 0) { base = *first; *first = func_0c227180(base); *second = func_0c227180(base + 4); }
    return result;
}
