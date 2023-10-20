#include <stdio.h>

int foo(char *string, int i, int isFind, int count)
{
    if (!isFind)
    {
        if (string[i] == 'a' && string[i + 1] == ' ')
        {
            isFind += 1;
            return foo(string, i, isFind, count);
        }
        else
        {
            return foo(string, (i + 1), isFind, count);
        }

        return foo(string, (i + 1), isFind, count);
    }
    else
    {
        if (string[i] == ' ')
        {
            return count;
        }
        count++;
        return foo(string, (i - 1), isFind, count);
    }
}

int main()
{
    char string[] = {" sleam naber canım alonzoa  "};
    int count = foo(string, 0, 0, 0);
    printf("%d", count);
    return 0;
}
