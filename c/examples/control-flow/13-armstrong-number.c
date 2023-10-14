#include <stdio.h>

int main()
{

    // get input value for number
    int number;
    scanf("%d", &number);

    // assign the number to another variable originalNumber
    int originalNumber = number;

    // sum variable to store the sum of cubes
    int sum = 0;
    // variable to access each digit of the number
    int remainder;

    // loop to find the cubes of each digit
    while (originalNumber != 0)
    {

        // use originalNumber % 10 to get the last digit
        remainder = originalNumber % 10;
        // add the cube of the last digit to sum
        sum += remainder * remainder * remainder;
        // use originalNumber / 10 to change the value of originalNumber
        originalNumber /= 10;
    }

    // check if sum  is equal to number
    if (sum == number)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }

    return 0;
}