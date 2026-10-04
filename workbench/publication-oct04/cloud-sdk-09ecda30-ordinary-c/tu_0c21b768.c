#include "objects.h"

extern struct SdkCompletionControl *dat_0c269a7c;
extern int *dat_0c269a74;

void func_0c21b768(struct SdkCompletionPacket *packet)
{
    unsigned int mask = _builtin_get_imask();
    struct SdkCompletionEntry *entries;
    int clear;
    register int flag;

    _builtin_set_imask(15);
    clear = 0;
    entries = dat_0c269a7c->entries;
    entries[packet->index].completion = clear;
    flag = 1;
    packet->state = clear;
    packet->pending = flag;
    dat_0c269a7c->counters[packet->index]++;
    *dat_0c269a74 = flag << (packet->index + 15);
    if (packet->callback)
        packet->callback(packet->context);
    _builtin_set_imask(mask);
}
