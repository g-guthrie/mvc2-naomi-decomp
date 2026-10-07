/* Candidate: kmySeparatePassInfo-style field split. Same instructions and
   size; retail holds the mask 3 in r14 and stores *p1/*p2 as soon as they
   are computed, while this spelling keeps the mask in r0 and schedules all
   five stores at the end, so registers and order differ. */
#pragma section kmysep
int func_0c216b60(unsigned int a, unsigned int *p1, unsigned int *p2, unsigned int *p3, unsigned int *p4, unsigned int *p5)
{
    register unsigned int v1, v2, v3, v4, v5;

    v1 = a & 3;
    v4 = (a >> 12) & 3;
    v3 = (a >> 8) & 3;
    v2 = (a >> 4) & 3;
    v5 = (a >> 16) & 3;
    *p1 = v1;
    *p2 = v2;
    *p3 = v3;
    *p4 = v4;
    *p5 = v5;
    return 0;
}
