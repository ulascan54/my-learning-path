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

    if (a < b)
        if (b < c)
            d = 500;
        else // even though aligned with first if this else belongs to second if
             // the closest if
            d = 400;

    if (a < b)
    {
        if (b < c)
            d = 500;
    }
    else
        d = 400;

    if (a < b)
        if (b < c)
            d = 500;
        else
            d = 400;

    if (a < b)
    {
        if (b < c)
            d = 500;
    }
    else
        d = 400;

    printf("d: %d\n", d);
}
