#include <stdio.h>

int main()
{
    double pound;

    // get input value for pound
    scanf("%lf", &pound);

    // convert pound to kg
    double kg = pound * 0.453592;

    // print the value of kg
    printf("%lf", kg);

    return 0;
}