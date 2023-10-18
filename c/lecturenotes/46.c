
/* how many different results can be obtained by the multiplication of two counting numbers less than 20
1 * 10 = 10 * 1 = 2 * 5 = 5 * 2 = 10
*/

#include <stdio.h>
void print_array(const int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
        // A[ i ] = 99;
    }
    printf("\n");
}

int is_element_of(int A[], int size, int n)
{
    int i;
    for (i = 0; i < size; i++)
        if (A[i] == n)
            return 1;
    return 0;
}

int main()
{
    int A[400] = {0};
    int i, j, count = 0, result;
    for (i = 1; i < 20; i++)
    {
        for (j = i; j < 20; j++)
        {
            result = i * j;
            // check whether it is already in A, if not add it to A
            if (!is_element_of(A, count, result))
                A[count++] = result;
            if (!is_element_of(A, count - 1, result))
                printf("%d\n", result);
        }
    }
    printf("%d number of different results.\n", count);
}