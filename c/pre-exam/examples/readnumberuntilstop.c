/*
    Read a number n from the user
        Read n numbers from the user, print # of odd numbers
    Read a new number n and repeat the above line
    Continue doing this until -1 arrives for n
*/

#include <stdio.h>

int main()
{
    int n, x, count;
    printf("enter the starting point \n");
    scanf("\n%d", &n);
    while (n > 0)
    {
        count = 0;
        printf("enter the ending point \n");
        scanf("%d", &x);
        for (int i = n; i < x; i++)
        {
            if (i % 2 != 0)
            {
                count++;
            }
        }
        printf("\nthere are %d odd numbers between two points \n------------\n", count);
        printf("enter new starting point \nor you can exit (enter -1  to exit)\n");
        scanf("\n%d", &n);
    };
    printf("See you ...");
}