

#include <stdio.h>
int str_len2(char *str)
{
    char *p = str;
    while (*p)
        p++;
    return p - str;
}
int main()
{
    /*
    char Months[ 12 ][ 10 ] = { 'J', 'a', ..., 0, 0, 'F', ... };
    char Months[ 12 ][ 10 ] = { {'J', 'a', ..., 'y'}, {'F', ...}, ... };
    char Months[ 12 ][ 10 ] = { "January", "February", ... };
    */
    char month[12][10] = {"January", "February", "March", "April", "May", "June",
                          "July", "August", "September", "October", "November", "December"};
    int i, j;
    char start = 'J';
    /*
    for( i = 0; i < 12; i++ ){
        for( j = 0; month[ i ][ j ] != '\0'; j++ ) printf( "%c", month[ i ][ j ] );
        printf( "\n" );
    }
    */

    for (i = 0; i < 12; i++)
    {
        printf("%s with length %d\n", month[i], str_len2(month[i]));
    }

    printf("\n\nmonths which start with %c:\n", start);
    for (i = 0; i < 12; i++)
    {
        if (month[i][0] == start)
            printf("%s with length %d\n", month[i], str_len2(month[i]));
    }
}
