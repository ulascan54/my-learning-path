/*
author: ulaşcan

question:
Bir C programı yazın, bu program özyinelemeli bir işlev kullanarak bir sayının asal olup olmadığını kontrol etsin. Kullanıcıdan bir tam sayı girmesini isteyin ve bu sayının asal olup olmadığını özyinelemeli bir işlev kullanarak belirleyin.
*/
int isPrime(int number, int a)
{
    if (number % a == 0 && a != 2)
    {
        return 0;
    }
    else if (a == 2)
    {
        return 1;
    }
    return isPrime(number, a - 1);
}

#include <stdio.h>

int main()
{
    int n;
    printf("Asal kontrolü için sayı giriniz");
    scanf("%d", &n);
    int test = isPrime(n, n - 1);
    if (test == 1)
    {
        printf("Number is prime number");
    }
    else
    {
        printf("Number is not a prime number");
    }

    return 0;
}