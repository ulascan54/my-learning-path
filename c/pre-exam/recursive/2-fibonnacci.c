/*
Bir C programı yazın, bu program özyinelemeli bir işlev kullanarak Fibonacci dizisinin ilk N terimini hesaplasın. Kullanıcıdan N değerini girmesini isteyin.
*/
#include <stdio.h>
// fibonnacci series -> 1 1 2 3 5 8 13 21 34
int calcFibonacci(int n, int i, int b)
{
    if (n == 0)
    {
        return 0;
    }
    printf("%d %d = %d \n", i, b, (i + b));

    return i + b + calcFibonacci(n - 1, b, i + b);
}

int main()
{
    int n;
    printf("sayı giriniz:");
    scanf("%d", &n);

    int result = calcFibonacci(n, 1, 1);

    printf("result: %d\n", result);
    return 0;
}
