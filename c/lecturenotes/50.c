#include <stdio.h>
int main()
{
    int x = 10, y = 50, z = 30;
    double k = 3.1;
    int *p, *q;
    double *m;
    int **pp;

    printf("size of p: %lu, size of m: %lu\n", sizeof(p), sizeof(m));

    p = &x;
    q = &y;
    m = &k;

    // INDIRECT access to a variable - *: INDIRECTION
    printf("value of x indirectly: %d\n", *p);
    printf("value of k indirectly: %f\n", *m);
    printf("\n");

    // *p = *p * 2;
    *p *= 2;

    printf("value of x: %d value of y: %d\n", *p, *q);
    printf("\n");

    pp = &p;

    // *(*pp) = *(*pp) + 1;
    **pp = **pp + 1;
    // **pp += 1;

    printf("value of x: %d value of y: %d\n", **pp, *q);
    printf("\n");

    pp = &q;
    **pp += 1;

    printf("value of x: %d value of y: %d\n", *p, **pp);
    printf("\n");
}
