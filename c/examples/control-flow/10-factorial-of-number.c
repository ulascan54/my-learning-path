#include <stdio.h>

int main()
{

    int number;

    // get input value for number
    scanf("%d", &number);

    int factorial = 1;

    // run a for loop from i = 1 to i <= number
    // inside loop multiply factorial with i
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    // print factorial
    printf("%d", factorial);

    return 0;
}