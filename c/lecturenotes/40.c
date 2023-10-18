
#include <stdio.h>
#define SIZE 10
// int add( int a, int b ); // CALL BY VALUE
// int sum_of_first_two( int A[] );

int max_of_array(int[], int);
int min_of_array(int[], int[]);

int main()
{
    // int c, k, x, y;
    // c = add( x, y ); // VALUES of x and y are sent to the function
    // k = sum_of_first_two( B ); // it it were by CALL BY VALUE we would
    // copy 1000000 elements from main memory to the local memory of the function
    // which actually needs just the first two elements
    // that would be a huge inefficiency

    // That's why it is designed with CALL BY REFERENCE
    // When we send an array to a function, just the address (REFERENCE) of
    // the first element is sent (copied) to the function
    // Because the elements of an array are contiguous (continuous)
    // the function can access the rest of the elements using this address

    // Because the function knows only the address of the first element
    // it cannot find the address of the last element
    // Either you should send that address also or the # of elements also

    int A[SIZE] = {3, 50, -2, 10};
    printf("Max of A: %d\n", max_of_array(A, SIZE));
    printf("Min of A: %d\n", min_of_array(A, &A[SIZE]));
}

int max_of_array(int A[], int size)
{
    int max = A[0], i;
    for (i = 1; i < size; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}

int min_of_array(int A[], int Last[])
{
    int size = Last - A;
    int i, min;
    min = A[size - 1];
    for (i = size - 2; i >= 0; i--)
    {
        if (A[i] < min)
            min = A[i];
    }
    return min;
}
