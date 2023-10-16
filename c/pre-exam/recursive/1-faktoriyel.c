/*
Bir sayının faktöriyelini (n!) hesaplayan bir C programı yazın. Kullanıcıdan bir tamsayı (n) girmesini isteyin ve faktöriyelini hesaplamak için özyinelemeli bir işlev kullanın.
*/

#include <stdio.h>

int calcFaktoriel(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * calcFaktoriel(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Sayı giriniz");
    scanf("%d", &n);
    int result = calcFaktoriel(n);
    printf("%d", result);
    return 0;
}
