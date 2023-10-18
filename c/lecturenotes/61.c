
#include <stdio.h>
#define SIZE 5

// assume that inside an array all zeros are contiguous - one after the other
// find the # of these zeros
int number_of_zeros(int *p, int *q)
{
    int count = 0;
    while (*p && p < q)
        p++;
    if (p < q)
    {
        while (!*p && p < q)
        {
            p++;
            count++;
        }
    }
    return count;
}

int *pointer_to_first_zero(int *p, int *q)
{
    while (*p && p < q)
        p++;
    if (p == q)
        return 0;
    return p;
}

int *pointer_to_last_zero(int *p, int *q)
{
    q--;
    while (*q && q >= p)
        q--;
    if (q < p)
        return 0;
    return q;
}

int number_of_zeros_f(int *p, int *q)
{
    int *left, *right;
    left = pointer_to_first_zero(p, q);
    right = pointer_to_last_zero(p, q);
    if (!left)
        return 0;
    return right - left + 1;
}

int main()
{
    int A[SIZE] = {80, 70, 80, 80, 90}, n = 500;
    printf("%d\n", number_of_zeros(A, A + SIZE));
    printf("%d\n", number_of_zeros_f(A, A + SIZE));
}
