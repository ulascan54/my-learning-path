#include <stdio.h>

// Soru 2:
// Bir C programı yazın. Bu program, bir karakter dizisini kullanıcıdan almalı, karakterlerin kaç adet olduğunu hesaplamalı ve sonucu işaretçi kullanarak döndürmelidir. Daha sonra sonucu işaretçi ile ekrana yazdırın

void calc_strlen(char *first, int *count)
{
    while (first[0] != '\0')
    {
        *count = *count + 1;
        first++;
    }
}

int main()
{
    char name[50];
    int count = 0;
    printf("enter a string:");
    scanf("%s", &name);

    calc_strlen(name, &count);

    printf("%d", count);

    return 0;
}