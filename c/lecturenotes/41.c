
// 17.04 Mon

// write a function which "returns" both the max and min of an array
// we will "return" two outputs through an array (output array)

#include <stdio.h>

// the users of this function should be informed that they should send an array
// of size at least 2 for the third parameter
void max_min(const int a[], int size, int results[])
{
    int i;
    // results [0]       results[1]
    // current max       current min

    if (a[0] > a[1])
    {
        results[0] = a[0];
        results[1] = a[1];
    }
    else
    {
        results[0] = a[1];
        results[1] = a[0];
    }
    // better to put first two elements inside results[]
    for (i = 2; i < size; i++)
    {
        if (a[i] > results[0])
        {
            results[0] = a[i];
        }
        if (a[i] < results[1])
        {
            results[1] = a[i];
        }
    }
    printf("min of a: %d\nmax of a: %d", results[1], results[0]);
}

int main()
{
    int a[10] = {1, 2, -3333, -444, 5, 6, 7, 9, -99, 10};
    int c[2];
    max_min(a, 10, c);
    return 0;
}
