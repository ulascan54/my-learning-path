// 24.04 Mon

// functions to copy arrays in normal and reverse order
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

void copy_normal(int dest[], const int source[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        dest[i] = source[i];
}

void copy_reverse(int dest[], const int source[], int size)
{
    int left, right;
    for (left = 0, right = size - 1; left < size; left++, right--)
        dest[left] = source[right];
}

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int B[10] = {0};
    print_array(A, 5);
    print_array(B, 10);
    printf("\n");

    copy_normal(&B[5], A, 5);
    print_array(A, 5);
    print_array(B, 10);
    printf("\n");

    copy_reverse(B, A, 5);
    print_array(A, 5);
    print_array(B, 10);
    printf("\n");
}
