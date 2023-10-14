#include <stdio.h>

int main()
{

    // get input for number
    int number;
    scanf("%d", &number);

    // variable to store the sum of digits
    int sum = 0;

    // use loop to access each digit and find sum of digits
    int num = number;
    while (num != 0)
    {

        // access each digit using num % 10
        int digit = num % 10;

        // add each digit to sum
        sum += digit;

        // change value of num
        num = num / 10;
    }

    // check if number is perfectly divided by sum
    if (number % sum == 0)
    {
        printf("Harshad Number");
    }
    else
    {
        printf("Not a Harshad Number");
    }

    return 0;
}