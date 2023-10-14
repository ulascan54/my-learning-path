#include <stdio.h>

int main()
{

    // get input value of number
    int number;
    scanf("%d", &number);

    // check if number is multiple of both 3 and 5
    if (number % 3 == 0 && number % 5 == 0)
    {
        printf("FizzBuzz");
    }
    // check if number is multiple of 3
    else if (number % 3 == 0)
    {
        printf("Fizz");
    }
    // check if number is multiple of 5
    else if (number % 5 == 0)
    {
        printf("Buzz");
    }
    // else print the value of number
    else
    {
        printf("%d", number);
    }

    return 0;
}