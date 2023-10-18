
#include <stdio.h>

void print_array(int A[], int size)
{
    if (size > 0)
    {
        printf("%d ", A[0]);
        print_array(&A[1], size - 1);
    }
}

void print_array_rev(int A[], int size)
{
    if (size > 0)
    {
        printf("%d ", A[size - 1]);
        print_array_rev(A, size - 1);
    }
}

void print_array_p(int *p, int *q)
{
    if (q - p > 0)
    {
        printf("%d ", *p);
        print_array_p(p + 1, q);
    }
}

void print_array_rev_p(int *p, int *q)
{
    if (q - p > 0)
    {
        printf("%d ", *(q - 1));
        print_array_rev_p(p, q - 1);
    }
}

int max_of_array(int *p, int *q)
{
    int rest;
    if (q - p == 1)
        return *p;
    rest = max_of_array(p + 1, q);
    return *p > rest ? *p : rest;
    /*
    if(*p > rest) return *p; return rest;
    */
}

int max_of_array2(int A[], int size)
{
    int rest;
    print_array(A, size);
    printf("\n");
    if (size == 1)
        return A[0];
    rest = max_of_array2(A, size - 1);
    if (A[size - 1] > rest)
        return A[size - 1];
    return rest;
}

int max_of_array3(int A[], int size)
{
    int left, right;
    print_array(A, size);
    printf("\n");
    if (size == 1)
        return A[0];
    left = max_of_array3(A, size / 2);
    right = max_of_array3(A + size / 2, (size + 1) / 2);
    if (left > right)
        return left;
    return right;
}

int main()
{
    int A[10] = {5, 7, 20, 8, 4, 0, 0, 0, 0, 300};
    /*
    print_array( A, 10 );
    printf( "\n" );
    print_array_rev( A, 10 );
    printf( "\n\n" );
    print_array_p( A, A + 10 );
    printf( "\n\n" );
    print_array_rev_p( A, A + 10 );
    */

    printf("\nmax: %d\n", max_of_array3(A, 10));
}
