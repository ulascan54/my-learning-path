
#include <stdio.h>
#include <string.h>
// check whether a string is palindromic or not

int is_palindromic(char *p)
{
    char *q;
    q = p;
    // q += strlen( p ) - 1;
    while (*q)
        q++;
    q--;
    if (!*p)
        return 0;
    while (p < q)
    {
        if (*p != *q)
            return 0;
        p++;
        q--;
    }
    return 1;
}

// convert a string to integer - "123" -> 123
// return -1 if a non-digit char inside

int to_integer(char *p)
{
    int result = 0;
    while (*p)
    {
        if (*p >= '0' && *p <= '9')
            result = result * 10 + (*p - '0');
        else
            return -1;
        p++;
    }
    return result;
}

// convert an integer to a string
void to_string(int n, char *p)
{
}

int main()
{
    char str1[50] = "12 3";
    printf("%d\n", is_palindromic(str1 + 6));
    printf("\"%s\" is eqv to: %d\n", str1, to_integer(str1));
}
