#include <stdio.h>
#define SIZE 10

int *find_p_to_max(int *, int *);

int main()
{
    int A[SIZE] = {500, -60, 70, 5, -60, -700, 5, -60, 70, 80}, *p_max;
    int B[100] = {500, 600, 70, 5, -60, -700, 5, -60, 70, 80, 400, 200};
    int *PointersMax[10];
    int i;
    int *p = A;
    int **q = PointersMax;

    for (i = 0; i < 100; i += 10)
    {
        PointersMax[i / 10] = find_p_to_max(B + i, B + i + 10);
    }
    printf("max of first 10: %d, max of second 10: %d\n", *PointersMax[0], *PointersMax[1]);
    // *q is the first element of PointersMax - the first pointer stored inside
    // *(q+1) is the second element of PointersMax - the second pointer stored inside
    printf("max of first 10: %d, max of second 10: %d\n", **q, **(q + 1));

    p_max = find_p_to_max(A, A + SIZE);
    printf("max: %d with index: %lu\n", *p_max, p_max - A);
}

int *find_p_to_max(int *first, int *last)
{
    int *p, *q;
    p = last - 1;
    q = last - 2;
    while (q >= first)
    {
        // printf( "*q: %d ", *q );
        if (*q > *p)
        {
            p = q;
        }
        q--;
    }
    // printf( "\n" );
    return p;
}
