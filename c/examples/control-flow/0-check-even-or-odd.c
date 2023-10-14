#include <stdio.h>

int main()
{

    // create the number variable
    int number;

    // get input value for number
    scanf("%d", &number);

    // check if the number is even or odd
    if (number % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}