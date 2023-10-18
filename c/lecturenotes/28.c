
#include <stdio.h>

/*
print:

1
22
333
...
999999999
*/

int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}