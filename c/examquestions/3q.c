#include <stdio.h>
#include <string.h>

int rev(char *p, char *q)
{
    while (p < q)
    {
        if (*p != *q)
        {
            return 0;
        }
        p++;
        q--;
    }
    return 1;
}

int main()
{
    char str[] = {"aaaa"};

    int isTrue = rev(str, str + strlen(str) - 1);
    if (isTrue)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
