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

// return the index of the last occurence of n in A -----    -1 if non-existing
int last_index(int A[], int size, int n)
{
    int i;
    for (i = size - 1; i >= 0; i--)
        if (A[i] == n)
            return i;
    return -1;
}

// using last_index, count n in A
int count_in_array(int A[], int size, int n)
{
    int count = 0, found;
    found = last_index(A, size, n);
    while (found != -1)
    {
        count++;
        found = last_index(A, found, n);
    }

    // 0 1 2 3 4 5 6 7
    // 5 4 5 5 5 4 8 8 --- counting 4 in this array
    // on the first call 5 is returned

    // 0 1 2 3 4 5
    // 5 4 5 5 5 4 - there are 5 elements on the left

    // returns 1 on the second call
    return count;
}

// write a function which returns the index of the first occurence of n in A
// using this new function write a new count function

int main()
{
    int A[10] = {4, 4, 3, 4, 5, 4, 3, 0, 9, 4};
    int n = 4;
    printf("last occurrence of %d in A is at index: %d\n", n, last_index(A, 10, n));
    printf("it appears %d times in A\n", count_in_array(A, 10, n));
}
