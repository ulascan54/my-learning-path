#include <stdio.h>

// Soru 1:
// Bir C programı yazın. Bu program, iki tamsayıyı kullanıcıdan almalı, bu iki sayıyı yerel değişkenler kullanarak toplamalı ve sonucu bir işaretçi kullanarak döndürmelidir. Daha sonra sonucu işaretçi ile ekrana yazdırın.

int main()
{
    int a, b;
    printf("enter two number :");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int *ptrs = &sum;

    printf("%d", *ptrs);
    return 0;
}