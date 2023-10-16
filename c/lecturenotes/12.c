#include <stdio.h>

int main()
{
    int n = 40, m;
    // if( 30 < n < 50 ) printf( "Yes\n" ); else printf( "No\n" );
    // if( 0 < 50 ) printf( "Yes\n" ); else printf( "No\n" );
    // if( 1 < 50 ) printf( "Yes\n" ); else printf( "No\n" );
    // if( 30 < n < 50 ) printf( "Yes\n" ); else printf( "No\n" );

    /*
    p = 30 < n
    q = n < 50
    p && q --- condition for n being inside (30, 50)

    p': n <= 30
    q': n >= 50

    ( n <= 30 ) || ( n >= 50 ) --- condition for n being outside (30, 50)
    !( 30 < n && n < 50 )
    p' || q'   EQV (p && q)'    - De Morgan Rule

    */

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

    n = -5;
    if (n)
        printf("Yes\n");
    else
        printf("No\n");

    m = (n >= 0) * 10 + (n < 0) * 20;
    printf("m: %d\n", m);

    if (n >= 0)
        m = 10;
    else
        m = 20;
}
