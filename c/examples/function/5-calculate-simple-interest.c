#include <stdio.h>

// create a function that accepts principal, time, and rate as parameters
// compute the simple interest and return it.
double simpleInterest(double principal, double time, double rate)
{
    return (principal * time * rate) / 100;
}

int main()
{

    // take input for principal, time, and rate
    double principal, time, rate;
    scanf("%lf %lf %lf", &principal, &time, &rate);

    // call simpleInterest() with arguments: principal, time and rate
    double interest = simpleInterest(principal, time, rate);

    // print simple interest
    printf("%.2lf", interest);

    return 0;
}