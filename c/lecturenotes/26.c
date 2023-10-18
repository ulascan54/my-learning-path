#include <stdio.h>

/*

print...

3 7 12 - 3 numbers
6 13 21 30 40 51 - 6 numbers
9 19 30 ... - 9 numbers
...
21 43 ... - 21 numbers

*/

int main()
{
    int first = 3, i, n, diff;
    while (first <= 21)
    {
        // print line
        i = 0;
        n = first;
        diff = first + 1;
        while (i < first)
        {
            printf("%d ", n);
            n += diff++;
            i++;
        }

        printf("\n");
        first += 3;
    }
}
