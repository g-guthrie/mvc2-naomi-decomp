struct Direction_0c0388a0 {
    unsigned char pad[62];
    signed char direction;
};

#pragma section N0388a0
int func_0c0388a0(struct Direction_0c0388a0 *a)
{
    a->direction = 0;
    return 1;
}

#pragma section N0388aa
int func_0c0388aa(struct Direction_0c0388a0 *a)
{
    a->direction = 1;
    return 1;
}

#pragma section N0388b4
int func_0c0388b4(struct Direction_0c0388a0 *a)
{
    a->direction = -1;
    return 1;
}
