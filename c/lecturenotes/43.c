// return whether a number n appears inside A[] or not
// return count of n inside A[]

#include <stdio.h>

int is_element_of(int A[], int size, int n)
{
    int i;
    for (i = 0; i < size; i++)
        if (A[i] == n)
            return 1;
    return 0;
}

int count_in_array(int A[], int size, int n)
{
    int i, count = 0;
    for (i = 0; i < size; i++)
        if (A[i] == n)
            count++;
    return count;
}

int main()
{
    //              0   1   2      3    4    5  6   7  8  9
    int A[10] = {10, 120, 5, -275472, 120, 4, 5, -7, 6, 33};
    int n = 1200;
    if (is_element_of(A, 10, n))
        printf("Yes\n");
    else
        printf("No\n");
    if (is_element_of(&A[5], 5, n))
        printf("Yes (2nd half)\n");
    else
        printf("No(2nd half)\n");
    if (is_element_of(A, 5, n))
        printf("Yes (1st half)\n");
    else
        printf("No(1st half)\n");
    printf("There are %d %d's inside A\n", count_in_array(A, 10, n), n);
    if (count_in_array(A, 10, n) /* > 0 */)
        printf("Yes\n");
    else
        printf("No\n");
}