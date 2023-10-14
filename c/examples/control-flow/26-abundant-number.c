#include <stdio.h>

int main()
{

    // get input for number
    int number;
    scanf("%d", &number);

    // variable to store sum of all divisors
    int sum = 0;

    // run loop to find the divisor of number
    for (int i = 1; i < number; ++i)
    {

        // check if i is divisor of number
        if (number % i == 0)
        {
            // if true, add i to sum
            sum += i;
        }
    }

    // check if sum is greater than number
    if (sum > number)
    {
        printf("Abundant Number");
    }
    else
    {
        printf("Not an Abundant Number");
    }

    return 0;
}