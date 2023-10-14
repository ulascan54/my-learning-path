#include <stdio.h>

int main()
{

    // create an array
    int arr[5] = {1, 2, 3, 4, 5};

    // create another array with the same size
    int newarr[5];

    // multiply elements of first array by 10 and store them in second array
    for (int i = 0; i < 5; i++)
    {
        newarr[i] = arr[i] * 10;
    }

    // print second array
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", newarr[i]);
    }

    return 0;
}