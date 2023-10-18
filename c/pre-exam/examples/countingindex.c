#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int arr1[1000];
    int arr2[100];
    for (int i = 0; i < 1000; i++)
        arr1[i] = (rand() % 99);
    for (int i = 0; i < 100; i++)
        arr2[i] = i;

    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 1000; j++)
            if (arr1[j] == arr2[i])
                arr2[i] += 1;

    printf("Array1: ");
    for (int i = 0; i < 1000; i++)
        printf("%d ", arr1[i]);
    printf("\n-------------------\n");

    printf("Array2: ");
    for (int i = 0; i < 100; i++)
        printf("%d ", arr2[i]);
}