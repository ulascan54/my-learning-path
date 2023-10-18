

#include <stdio.h>
#define SIZE 3

void find_min(int *, int *, int *);

int main()
{
    int A[SIZE] = {5, 60, 70}, min;
    find_min(A, A + SIZE, &min);
    printf("min: %d", min);
}

void find_min(int *first, int *last, int *p)
{
    // min = A[ 0 ];
    for (*p = *first, first++; first < last; first++)
        if (*first < *p)
            *p = *first;
}
