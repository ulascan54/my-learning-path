/*
author: ulaşcan

question:


*/

#include <stdio.h>

int sumDigits(int number)
{
    if (number == 0)
        return 0;
    return (number % 10) + sumDigits(number / 10);
}

int main()
{
    int n;
    printf("sayı girin");
    scanf("%d", &n);

    int result = sumDigits(n);
    printf("%d", result);
    return 0;
}