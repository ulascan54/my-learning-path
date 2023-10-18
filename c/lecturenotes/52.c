

#include <stdio.h>

int main()
{
    int A[10] = {5, 60, 70};
    int *p = A;
    int *q = A + 1; // address of next integer (&A[1])
    printf("Diff int: %lu\n", q - p);

    double B[10] = {5, 6, 7};
    double *r = &B[0];
    double *s = &B[1];
    printf("Diff double: %lu\n", s - r);

    // print array A without the name A
    for (int i = 0; i < 10; i++)
        printf("%d ", p[i]);
    printf("\n\n");

    // print array A without array notation (no brackets)
    for (int i = 0; i < 10; i++)
        printf("%d ", *(A + i));
    printf("\n\n");

    // A[ i ] is IN REALITY *(A + i)
}