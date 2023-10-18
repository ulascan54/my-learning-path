
#include <stdio.h>
#define SIZE 5

int print_array_p(int *p, int *q)
{
    while (p < q)
        printf("%d ", *p++);
    printf("\n");
}

void reverse_copy_p(int *dest, int *source, int *last)
{
    int *p = last - 1;
    while (p >= source)
    {
        *dest = *p;
        dest++;
        p--;
    }
}

int main()
{
    int A[SIZE] = {500, -60, 70, 5, -60};
    int B[SIZE] = {0};
    print_array_p(A, A + SIZE);
    // printf();
    print_array_p(B, B + SIZE);
    reverse_copy_p(B, A, A + SIZE);
    print_array_p(B, B + SIZE);
}
