
#include <stdio.h>

/*
print the following:

***** - n stars
 ****
  ***
   **
    *
*/

int main()
{
    int n;
    printf("Enter the base of stars:");
    scanf("%d", &n);

    int i = n;
    while (i > 0)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");

        i--;
    }
    return 0;
}
