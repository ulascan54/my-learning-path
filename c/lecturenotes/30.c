#include <stdio.h>

/*
print:
n: 7
*******
     *
    *
   *
  *
 *
*******
*/

void first_last(int stars)
{
    int i;
    for (i = 0; i < stars; i++)
        printf("*");
}
void middle(int spaces)
{
    int i;
    for (i = 0; i < spaces; i++)
        printf(" ");
    printf("*");
}

int main()
{
    int n, spaces;
    printf("Enter n: ");
    scanf("%d", &n);
    first_last(n);
    printf("\n");
    for (spaces = n - 2; spaces >= 1; spaces--)
    {
        middle(spaces);
        printf("\n");
    }
    first_last(n);
    printf("\n");
}