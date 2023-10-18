#include <stdio.h>
#define SIZE 5

// return a pointer to the last occurence of n in A - null pointer if none
int *pointer_to_last(int *first, int *last, int n)
{
    for (last--; last >= first; last--)
    {
        if (*last == n)
            return last;
    }
    return 0;
}

// count n in A using above function
int count_in_array_f(int *first, int *last, int n)
{
    int *p;
    int count = 0;
    p = pointer_to_last(first, last, n);
    while (p)
    {
        count++;
        p = pointer_to_last(first, p, n);
    }
    return count;
}

int main()
{
    int A[SIZE] = {500, 500, 500, 500, 500}, n = 500;
    printf("index of last occurence of %d is: %lu\n", n, pointer_to_last(A, A + SIZE, n) - A);
    printf("and there are %d # of %d's in the array.\n", count_in_array_f(A, A + SIZE, n), n);
}
