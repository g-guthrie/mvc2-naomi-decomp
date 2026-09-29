/* The scalar copy and animation advance link at 42 bytes, with 29 matching
 * retail bytes; load order and the count comparison still differ. */
#include "objects.h"

#pragma section N1d89a8
void func_0c1d89a8(struct Obj_tu5_03 *a, const float *value)
{
    unsigned char count;
    a->f120 = *value;
    a->f124 = *value;
    a->f128 = *value;
    count = ++a->b5;
    if (count > 6)
        a->b4++;
}
