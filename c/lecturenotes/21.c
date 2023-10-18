#include <stdio.h>

/*
print the following:

*
**
***
...
** n **

*/

// function printing k ch's on a single line
void print_line(int k, char ch)
{
    int i;
    i = 0;
    while (i < k)
    {
        printf("%c", ch);
        i++;
    }
}

int main()
{
    const char ch = 'A';
    int n, i, j;
    printf("Enter base: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        print_line(i, ch);
        printf("\n");
        i++;
    }

    printf("\n\n");

    // without the function
    i = 1;
    while (i <= n)
    {
        j = 0;
        while (j < i)
        {
            printf("%c", ch);
            j++;
        }
        printf("\n");
        i++;
    }
}
