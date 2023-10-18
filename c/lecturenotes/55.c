
// 11.05

#include <stdio.h>
#define SIZE 10

int *find_p_to_min(int *, int *);

int main()
{
    int A[SIZE] = {5, -60, 70, 5, -60, -700, 5, -60, 70, 80}, min, *p_min, *p2;
    // find_min( A, A + SIZE, &min );
    printf("min: %d\n", min);
    p_min = find_p_to_min(A, SIZE);
    printf("min: %d with index: %lu\n", *p_min, p_min - A);

    printf("min: %d with index: %lu\n", *find_p_to_min(A, SIZE), find_p_to_min(A, SIZE) - A);

    p2 = find_p_to_min(A + (SIZE + 1) / 2, SIZE / 2);
    printf("[SECOND HALF] min: %d with index: %lu\n", *p2, p2 - A);
}

int *find_p_to_max(int *first, int *last)
{
    int *p, *q;
    p = last;
    q = last - 1;
    while (p >= first)
    {
    }
    return p;
}
