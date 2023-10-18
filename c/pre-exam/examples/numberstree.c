// 23.03

#include <stdio.h>

/*

print...

         0
        10
 ...
  76543210
 876543210
9876543210

*/

int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = i; j >= 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}