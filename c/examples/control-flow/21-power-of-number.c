#include <stdio.h>

int main()
{

    int number;
    int power;

    // get input value for number and power
    scanf("%d %d", &number, &power);

    // variable to store the power of a number
    int result = 1;

    // run a loop from 1 to power
    for (int i = 1; i <= power; i++)
    {
        result *= number;
    }

    // print the result
    printf("%d", result);

    return 0;
}