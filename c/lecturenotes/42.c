
// return the index of min of an array

#include <stdio.h>

int index_min(int A[], int size)
{
    int i, index = 0;
    for (i = size - 1; i > 0; i--)
    {
        if (A[i] < A[index])
            index = i;
    }
    return index;
}

int main()
{
    //              0   1   2      3    4    5  6   7  8  9
    //                                       0  1   2  3   4
    int A[10] = {10, 20, 5, -275472, 100, 4, 5, -7, 6, 33};
    int k = index_min(A, 5); // index_min( &A[ 0 ], 5 );
    printf("min of A: %d with index: %d\n", A[k], k);
    int x = index_min(&A[5], 5);
    printf("min of second half of A: %d with index: %d\n", A[x + 5], x + 5);
}
