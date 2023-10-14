#include <stdio.h>

// function to find the sum of divisors
int findSum(int number)
{
    int sum = 0;

    // run a for loop to find the sum of all divisors
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main()
{

    // get input value for number
    int number;
    scanf("%d", &number);

    // call the findSum() function with argument number
    int result = findSum(number);

    // if result is equal to number, print Perfect Number. Otherwise, print Not a Perfect Number.
    if (result == number)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }

    return 0;
}