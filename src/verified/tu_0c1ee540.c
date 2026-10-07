typedef struct { float x, y, z; } Vec3;
extern void func_0c1eeef0(Vec3 *);
extern void func_0c1ee5e0(Vec3 *, void *);
void func_0c1ee540(Vec3 *src, void *arg)
{
    Vec3 v;
    v.x = src->x;
    v.y = src->y;
    v.z = src->z;
    func_0c1eeef0(&v);
    func_0c1ee5e0(&v, arg);
}
