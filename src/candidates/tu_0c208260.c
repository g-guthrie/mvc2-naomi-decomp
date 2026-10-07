/* Candidate: SDK store-queue transfer. Control flow, pref intrinsics and
   pool contents match; retail keeps the table offset idx * 4 in r11 and
   loads table[idx] twice (mask/or path and >> 24 path), while this
   spelling spills the offset to a stack slot and loads the entry once. */
struct SqDest {
    int index;
    unsigned int size;
};

struct SqXfer {
    unsigned int *table;
    void *src;
    struct SqDest *dest;
};

extern void func_0c206a40(void *dst, void *src, unsigned int size);

int func_0c208260(struct SqXfer *x)
{
    int idx;
    unsigned int addr;
    unsigned int area;
    unsigned int size;

    idx = x->dest->index;
    addr = (x->table[idx] & 0x03ffffff) | 0xe0000000;
    area = x->table[idx] >> 24;
    *(volatile unsigned int *)0xff00003c = area;
    *(volatile unsigned int *)0xff000038 = area;
    size = x->dest->size;
    func_0c206a40((void *)addr, x->src, size);
    _builtin_prefetch((void *)addr);
    if (size == 64) {
        addr += 32;
        _builtin_prefetch((void *)addr);
    }
    x->table[idx] += (size >> 2) << 2;
    return 0;
}
