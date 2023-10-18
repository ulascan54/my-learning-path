
/*
print the following:

     * - 1
    *** - 3
   ***** - 5
...
** n ***** - n

*/
#include <stdio.h>

int main()
{
    char c = '*';
    int n;
    printf("Enter base:");
    scanf("%d", &n);

    printf("\n");

    for (int i = 1; i <= n; i += 2)
    {
        for (int j = (n - i); j >= 0; j -= 2)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}