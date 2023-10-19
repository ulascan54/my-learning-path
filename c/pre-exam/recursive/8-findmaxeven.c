#include <stdio.h>

int findMaxEven(int *arr, int size, int max)
{
    if (size == 0)
    {
        return max;
    }

    if (arr[size - 1] % 2 == 0 && arr[size - 1] > max)
    {
        max = arr[size - 1];
    }

    return findMaxEven(arr, size - 1, max);
}

int main()
{
    int arr[] = {1, 2, 3, 44, 6, 99, 204, 599, 31};

    int max = findMaxEven(arr, sizeof(arr) / sizeof(arr[0]), arr[0]);

    if (max != -1)
    {
        printf("En büyük çift sayı: %d\n", max);
    }
    else
    {
        printf("Çift sayı bulunamadı.\n");
    }

    return 0;
}
