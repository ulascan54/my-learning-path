#include <stdio.h>
#include <stdlib.h>

// Soru 3:
// Bir C programı yazın. Bu program, iki tamsayı dizisi almalı ve bu dizilerin elemanlarını toplamalı, ardından toplam sonuçları bir işaretçi kullanarak döndürmelidir.

void addarrays(int *arr1, int *arr2, int *result, int size)
{
    for (int i = 0; i < size; i++)
    {
        result[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int result[sizeof(arr1) / sizeof(int)];
    addarrays(arr1, arr2, result, sizeof(arr1) / sizeof(int));
    for (int i = 0; i < sizeof(arr1) / sizeof(int); i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}