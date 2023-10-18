
#include <stdio.h>

void print_array(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int A[5] = {20, 30};
    int B[5] = {0};
    int C[] = {3, 4, 5, 55};
    print_array(A, 5);
    print_array(B, 5);
    int size_C;
    size_C = sizeof(C) / sizeof(int);
    print_array(C, size_C);
    printf("A[5]: %d\n", A[5]);

    printf("size of integer: %d\n", sizeof(C));
    printf("# of integers in C: %d\n", size_C);
}
