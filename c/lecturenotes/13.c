
/*
    if (condition)
        statement_T;
    else
        statement_F;

    if (condition) statement_T; else statement_F;

    if (condition)
        statement_T;

    if (condition) statement_T;
*/
#include <stdio.h>

int main()
{
    int a = 1000, b = 20, c = -30, d = 0;
    /*
    if( a < b )
        c = 50;
        d = 100;  // wrong indentation (logically - not syntactically)
    else // a new instruction starts with else - COMPILER ERROR!
        c = 200;

    if( a < b ) c = 50;
    d = 100;
    else c = 200;
    */

    if (a < b)
    {
        c = 50;
        d = 100;
    }
    else
        c = 200;

    printf("c: %d d: %d\n", c, d);
}
