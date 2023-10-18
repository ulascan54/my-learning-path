/*Bir C programı yazın. Bu program, bir tamsayı dizisi almalı ve bu dizinin elemanlarını küçükten büyüğe sıralamalı, ardından sıralanmış diziyi başka bir işaretçi kullanarak döndürmelidir.*/

#include <stdio.h>

void sortarr(int *first, int *last)
{
    int *start = first;
    while (start != last)
    {
        for (int i = 0; i < last - first; i++)
        {
            if (*start < first[i])
            {
                int temp = *start;
                *start = first[i];
                first[i] = temp;
            }
        }
        start++;
    }
}

int main()
{
    int arr1[] = {
        21,
        12,
        32,
        10,
        45,
        5,
        60,
    };

    sortarr(arr1, arr1 + (sizeof(arr1) / sizeof(int)));

    for (int i = 0; i < sizeof(arr1) / sizeof(int); i++)
    {
        printf("%d ", arr1[i]);
    }
}