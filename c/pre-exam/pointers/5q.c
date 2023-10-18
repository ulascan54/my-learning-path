// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

// Soru 3:
// Bir C programı yazın. Bu program, bir tamsayı dizisi tanımlamalı ve dizinin elemanlarını kullanıcıdan almalıdır. Daha sonra bu diziyi ters çevirmeli ve sonucu bir işaretçi kullanarak döndürmelidir.

void revarr(int *first, int *last)
{
    int temp = 0;
    while (first != last - 1)
    {
        temp = first[0];
        first[0] = last[0];
        last[0] = temp;
        last--;
        first++;
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    revarr(arr1, &(*(arr1 + 5)));

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}