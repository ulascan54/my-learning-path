#include <stdio.h>

int main()
{

    int a, b, m, n, y_rounded;
    double p, x, y, y_fractional;

    m = 3;
    n = 2;
    p = 2.0;
    x = m / p;
    // y = 10.3 + m / ( n + 0.0 );  // y = 1;    ----   y = 1.0 for first version
    y = 10.3 + m / (double)n;
    printf("x: %f and y: %f \n", x, y);

    y = 11.5499;
    // rounding the value y (11.8) - y_rounded should be 12
    // y_rounded = (int) y; // yet it is the integer part of y
    // y_fractional = y - y_rounded;  // 11.8 - 11 = 0.8
    // y_rounded += ( y_fractional >= 0.5 );
    // y_rounded += 1; and will be eqv to y_rounded++;
    // y_rounded += 0;

    // if( y_fractional >= 0.5 ) y_rounded++;

    /*
    x = x / 6;   --- x /= 6;
    y = y * 5;  ----  y *= 5;


    */

    y_rounded = (int)(y + 0.5);

    printf("y: %f and y_rounded: %d \n", y, y_rounded);

    a = 5;
    b = 10;
    printf("\na: %d b: %d \n", a, b);
    a++;
    b++; // a: 6 - b: 11
    printf("a: %d b: %d \n", a, b);
    m = a++ + 10;
    printf("a: %d b: %d m: %d\n", a, b, m);

    n = 3443;
    printf("a: %-8d b: %-10d m: %d n: %d\n", a, b, m, n);
    a = 423;
    b = 454;
    printf("a: %-8d b: %-10d m: %d n: %d\n", a, b, m, n);
}