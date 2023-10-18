#include <stdio.h>
#define SIZE 5

int is_symmetric_p(int *first, int *last)
{
    last--;
    while (first < last)
    {
        if (*first != *last)
            return 0; // else return 1; - should be incorrect
        first++;
        last--;
    }
    return 1;
}

int main()
{
    int A[SIZE] = {500, -60, 70, -60, 500};
    printf("%d\n", is_symmetric_p(A, &A[5]));
}
