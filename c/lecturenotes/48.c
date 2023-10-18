#include <stdio.h>

void print_array(const int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int A[5][3] = {{1}, {2, 3}, {4, 5}, 6, 7, 8, 9}, i, j;
    for (i = 0; i < 5; i++)
        print_array(A[i], 3);
}
