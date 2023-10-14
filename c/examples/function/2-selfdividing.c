#include <stdio.h>

// function to check self dividing number
int checkSelfDivide(int number)
{
    int num = number;
    int digit;

    while (num != 0)
    {

        // access each digit of num
        // Hint: Use num % 10 to get the last digit
        digit = num % 10;

        // check if any digit doesn't divide the number
        // return 0, if true
        if (number % digit != 0)
            return 0;

        // change the value of num by using num / 10
        num /= 10;
    }

    // if all digit divides the number
    return 1;
}

int main()
{

    int number;

    // get input value for number
    scanf("%d", &number);

    // call checkSelfDivide() function
    int result = checkSelfDivide(number);

    // check the returned value is 1
    if (result)
    {
        printf("Self Dividing Number");
    }
    else
    {
        printf("Not a Self Dividing Number");
    }

    return 0;
}