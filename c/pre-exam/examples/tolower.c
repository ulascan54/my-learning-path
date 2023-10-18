/*
author: ulaşcan

question:


*/

#include <stdio.h>

void toLower(char n)
{
    if ('A' <= n && 'Z' >= n)
    {
        n = 'a' + (n - 'A');
        printf("%c", n);
    }
}

int main()
{
    char n;
    scanf("%c", &n);
    toLower(n);
    return 0;
}