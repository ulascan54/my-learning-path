#include <stdio.h>

/*
print:

1
22
333
...
999999999
*/

void print_line(int i)
{
    int j;
    for (j = 0; j < i; j++)
        printf("%d", i);
}

int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        print_line(i);
        printf("\n");
    }
}