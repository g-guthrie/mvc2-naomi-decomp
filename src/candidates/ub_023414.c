/* Candidate: no verified twins. Remaining diffs: fabs vs ==/-== on 90/180,
 * ftrc+and 0xffff angle packing, vec3 struct copy vs __quick_mvn, atan2
 * argument order, func_0c0235d0 add 0xc000. */

struct Vec3f {
    float x, y, z;
};

extern float func_0c1ebd40(unsigned short a);
extern float func_0c1ec2c0(unsigned short a);
extern float func_0c1ebc70(float a, float b);
extern float func_0c1ee730(int a);
extern float func_0c1ee580(int a);
extern float func_0c1ee7f0(int a);

void func_0c023414(float a, float b, float c, struct Vec3f *out)
{
    unsigned short u;
    unsigned short v;
    float s0;
    float s1;
    float c0;
    float c1;
    struct Vec3f t;

    u = (unsigned short)(int)(b * 65536.0f / 360.0f + 0.5f);
    if (b == 90.0f || b == -90.0f)
        s0 = 0.0f;
    else
        s0 = func_0c1ebd40(u);

    v = (unsigned short)(int)(c * 65536.0f / 360.0f + 0.5f);
    if (c == 90.0f || c == -90.0f)
        s1 = 0.0f;
    else
        s1 = func_0c1ebd40(v);

    if (b == 180.0f || b == -180.0f)
        c0 = 0.0f;
    else
        c0 = func_0c1ec2c0(u);

    if (c == 180.0f || c == -180.0f)
        c1 = 0.0f;
    else
        c1 = func_0c1ec2c0(v);

    t.x = a * c0 * c1;
    t.y = a * s0;
    t.z = a * c0 * s1;
    *out = t;
}

void func_0c023500(float a, float b, struct Vec3f *out)
{
    func_0c023414(a, 90.0f - b, b, out);
}

void func_0c02351c(float *p, float *len, int *az, int *el)
{
    float n;
    float z;

    n = p[0] * p[0] + p[2] * p[2];
    *len = n;
    if (*len == 0.0f && p[1] == 0.0f) {
        *az = 0;
    } else {
        *az = (int)func_0c1ebc70(p[2], p[0]);
    }
    n = *len * *len + p[1] * p[1];
    *len = n;
    if (p[0] == 0.0f && p[2] == 0.0f) {
        *el = 0;
    } else {
        *el = (int)func_0c1ebc70(p[2], p[0]);
    }
}

void func_0c0235d0(float *p, float *len, int *az, int *el)
{
    func_0c02351c(p, len, az, el);
    *az = *az + (short)0xc000;
}

void func_0c0235e6(float *p, int *out)
{
    int az;
    int el;
    float len;

    func_0c0235d0(p, &len, &az, &el);
    func_0c1ee730(az);
    func_0c1ee580(el);
    func_0c1ee7f0(*out);
}

void func_0c023612(float *a, float *b, int *out)
{
    float d[3];

    d[0] = b[0] - a[0];
    d[1] = b[1] - a[1];
    d[2] = b[2] - a[2];
    func_0c0235e6(d, out);
}
