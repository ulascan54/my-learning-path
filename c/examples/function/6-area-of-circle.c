// Replace ___ with your code
#include <stdio.h>

// create computeArea() function that accepts radius and pi as parameters
// computes the area and return it
double computeArea(double radius, double pi)
{
    return radius * pi * radius;
}

int main()
{

    double pi = 3.14;

    // get input value for radius
    double radius;
    scanf("%lf", &radius);

    // call computeArea() with arguments radius and pi
    double area = computeArea(radius, pi);

    // print returned value up to 2 decimal points
    printf("%.2lf", area);

    return 0;
}