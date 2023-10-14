// Replace ___ with your code
#include <stdio.h>
#include <math.h>

// function to compute standard deviation
double calculateSD(double data[])
{
    double sum = 0.0;

    // find the sum of all the array elements
    for (int i = 0; i < 5; i++)
    {
        sum += data[i];
    }

    // compute the mean
    double mean = sum / 5;

    // find difference of each value and mean
    // compute the square of each difference
    // add all the squared difference
    double result = 0.0;
    for (int i = 0; i < 5; i++)
    {
        double a = mean - data[i];
        result += pow(a, 2);
    }

    // compute variance by dividing the above result by 5.0
    double variance = result / 5.0;

    // compute the standard deviation by
    // calculation the square root of variance
    double sd = sqrt(variance);

    // return standard deviation
    return sd;
}

int main()
{

    double numArray[5];

    // get input array elements
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &numArray[i]);
    }

    // call calculateSD with arguments numArray
    double sd = calculateSD(numArray);

    // print the returned value
    printf("%.3lf", sd);

    return 0;
}