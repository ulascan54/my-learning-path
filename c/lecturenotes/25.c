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
    int i = 0, j, spaces = 9; // i: the first digit for each line
    while (i <= 9)
    { // while( spaces >= 0 )
        // print the line
        // print spaces # of spaces
        j = 0;
        while (j < spaces)
        {
            printf(" ");
            j++;
        }

        // print numbers from i down to 0
        j = i;
        while (j >= 0)
        {
            printf("%d", j);
            j--;
        }

        // update i and spaces
        i++;
        spaces--;

        printf("\n");
    }
    printf("\n\n");

    i = 0;
    while (i <= 9)
    {
        // design as if to print numbers from 9 down to 0 for each line
        j = 9;
        while (j >= 0)
        {
            if (j <= i)
                printf("%d", j);
            else
                printf(" ");
            j--;
        }
        i++;
        printf("\n");
    }
}
