#include <stdio.h>
rev(int *p, int *q)
{
    while ((p - 1) != q)
    {
        printf("%d ", *q);

        q--;
    }
}

int main()
{
    int arr1[] = {1,
                  2,
                  3,
                  4,
                  5,
                  6};

    rev(arr1, &arr1[5]);

    return 0;
}
