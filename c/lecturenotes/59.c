

#include <stdio.h>
#define SIZE 5

int count_in_array_p(int *first, int *last, int n)
{
    int count = *first == n ? 1 : 0;
    /*
    Syntax
    condition ? value_if_true : value_if_false
    */
    for (first++; first < last; first++)
    {
        if (*first == n)
            count++;
    }
    return count;
}

int main()
{
    int A[SIZE] = {500, -60, 500, -60, 500}, n = 500;
    printf("count of %d in A: %d\n", n, count_in_array_p(A, A + SIZE, n));
}
