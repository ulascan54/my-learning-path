/*
author: ulaşcan

question:
Bir C programı yazın, bu program özyinelemeli bir işlev kullanarak bir sayının tersini (tersten yazılışını) hesaplasın. Kullanıcıdan bir tam sayı girmesini isteyin ve bu sayının tersini bulmak için özyinelemeli bir işlev kullanın.

*/

int reverseNumber(int n, int b)
{
    if (n == 0)
        return 0;
    return ((n % 10) * b) + reverseNumber(n / 10, b / 10);
}

#include <stdio.h>

int main()
{
    int n;
    printf("sayı girin:");
    scanf("%d", &n);

    int result = reverseNumber(n, 100);

    printf("%d", result);

    return 0;
}