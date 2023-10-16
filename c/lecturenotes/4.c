#include <stdio.h>

int main()
{

    int m, n;
    double p, x, y;

    m = 3;
    n = 2;
    p = 2.0;
    x = m / p;
    // y = 10.3 + m / ( n + 0.0 );  // y = 1;    ----   y = 1.0 for first version
    y = 10.3 + m / (double)n;
    printf("x: %f and y: %f \n", x, y);

    // rounding
}