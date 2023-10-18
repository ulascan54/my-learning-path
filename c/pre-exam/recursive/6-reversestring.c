/*
author: ulaşcan

question:
Bir C programı yazın, bu program özyinelemeli bir işlev kullanarak bir metni ters çevirsin. Kullanıcıdan bir metin dizisi girmesini isteyin ve bu metni ters çevirmek için özyinelemeli bir işlev kullanın.
*/
#include <stdio.h>
#include <string.h>

int findlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

void findrev(char *str, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    else
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        findrev(str, start + 1, end - 1);
    }
}

int main()
{
    char string[30];

    printf("Bir metin girin: ");
    scanf("%s", string);

    int len = findlen(string);
    findrev(string, 0, len - 1);

    printf("Ters çevrilmiş metin: %s\n", string);

    return 0;
}
