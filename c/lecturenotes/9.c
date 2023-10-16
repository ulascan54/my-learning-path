
// given the function finding max of two integers write functions to find
// max of three or four integers

#include <stdio.h>

int max2(int a, int b)
{
    return a > b ? a : b;
    // if( a > b ) return a; else return b;
}

int max3(int x, int y, int z)
{
    /* int a;
    a = max2( x, y );
    return max2( a, z );
    */
    return max2(max2(x, y), z);
}

int max4(int x, int y, int z, int w)
{
    // return max2( max2( x, y ), max2( z, w ) );
    // return max2( max3( x, y, z ), w );
    return max2(max2(max2(x, y), z), w);
}

int main()
{
    int a, b, c, d;
    printf("Enter a, b, c, d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Max of first three is: %d\n", max3(a, b, c));
    printf("Max of four is: %d\n", max4(a, b, c, d));
}
