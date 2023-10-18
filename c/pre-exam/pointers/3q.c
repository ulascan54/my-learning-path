#include <stdio.h>
#include <stdlib.h>

// Soru 3:
// Bir C programı yazın. Bu program, bir tamsayı dizisi tanımlamalı ve dizinin elemanlarını rastgele değerlerle doldurmalıdır. Daha sonra en büyük elemanın dizideki indisini bulmalı ve sonucu bir işaretçi kullanarak döndürmelidir.

int *find_index0fmax(int *first, int *last)
{
    int *pmax;
    int max = first[0];
    while (first[0] != last[0])
    {
        if (first[0] > max)
        {
            max = first[0];
            pmax = first;
        }
        first++;
    }

    return pmax;
}

int main()
{
    int arr[40];
    int *pmax;
    printf("Array:\n");
    for (int i = 0; i < 40; i++)
    {
        arr[i] = rand() % 99;
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\n");
    printf("\n");

    pmax = find_index0fmax(arr, &arr[40]);

    printf("Max index of arr :%ld \nvalue of ->%d\n", (pmax - arr), arr[pmax - arr]);

    return 0;
}