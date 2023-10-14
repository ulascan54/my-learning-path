#include <stdio.h>

int main()
{

    double km;

    // get input value for km
    scanf("%lf", &km);

    // convert kilometer to miles
    double miles = km / 1.6;

    // print the distance in miles
    printf("%lf", miles);

    return 0;
}