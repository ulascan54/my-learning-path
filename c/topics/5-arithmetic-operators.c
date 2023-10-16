#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // arithmetic operations

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ (increment)
    // -- (decrement)

    int x = 5;
    int y = 2;
    float z = x / (double)y;
    // float z = (double) x / y; -> same thing

    printf("%f", z);

    return 0;
}