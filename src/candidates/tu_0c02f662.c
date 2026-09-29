/* The bit split and output store match 25/28 bytes; SHC allocates the
 * shifted one in r1, while retail uses r3. */
#pragma section N02f662
int func_0c02f662(unsigned int *out, signed char bit)
{
    int high = bit >= 32;
    *out = 1 << (bit - ((signed char)high << 5));
    return high;
}
