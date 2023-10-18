#include <stdio.h>

int main()
{
    int i;

    i = 0; // initialization
    while (i < 10)
    { // repetition condition
        printf("%d ", i);
        i++; // update
    }

    printf("\n\n");

    /*
    for( initialization; repetition condition; update ){
        printf( "%d ", i );
    }
    */

    for (i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
}