#include <stdio.h>

int main()
{

    double centimeter;

    // get double input value
    scanf("%lf", &centimeter);

    // convert centimeter to feet
    double feet = centimeter * 0.0328;

    // print the result in feet
    printf("%lf", feet);

    return 0;
}