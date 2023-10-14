#include <stdio.h>
int main()
{

    // get input value for number
    int number;
    scanf("%d", &number);

    int num = number;
    int digit;
    int sum = 0;

    // run while loop to access each digit of number
    while (num != 0)
    {

        // use num % 10 to find digit of each number
        digit = num % 10;

        // add each digit to sum
        sum += digit;

        num = num / 10;
    }
    // print the sum
    printf("%d", sum);

    return 0;
}