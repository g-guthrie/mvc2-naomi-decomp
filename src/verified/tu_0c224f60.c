/* Complete SDK packed-command wrapper; alignment padding is excluded. */
extern void func_0c213200(int, unsigned int);
int func_0c224f60(int selector, unsigned int value)
{
    func_0c213200(0x74, (selector << 8) | (value & 255));
    return 0;
}
