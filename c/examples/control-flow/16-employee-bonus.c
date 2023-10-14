#include <stdio.h>

int main()
{

    double salary;
    double serviceYear;
    double bonus;

    // get input value for salary and serviceYear
    scanf("%lf %lf", &salary, &serviceYear);

    // check if serviceYear is greater than 5
    if (serviceYear > 5)
    {

        // compute the bonus and print  it
        // Hint: (5 * salary) / 100
        bonus = (5 * salary) / 100;
        printf("%lf", bonus);
    }

    return 0;
}