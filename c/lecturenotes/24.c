/*
    Read a number n from the user
        Read n numbers from the user, print # of odd numbers
    Read a new number n and repeat the above line
    Continue doing this until -1 arrives for n
*/
#include <stdio.h>
#define SENTINEL -1

int main()
{
    int n, i, odd, number;
    printf("Enter first n: ");
    scanf("%d", &n);
    while (n != SENTINEL)
    {
        i = 1;
        odd = 0;
        while (i <= n)
        {
            printf("Enter the %dth number of %d numbers: ", i, n);
            scanf("%d", &number);
            if (number % 2)
            { // if( number % 2 == 1 )
                odd++;
            }
            i++;
        }
        printf("There are %d # of odd numbers among %d numbers.\n", odd, n);
        printf("Enter next n: ( %d to exit )", SENTINEL);
        scanf("%d", &n);
    }
}
