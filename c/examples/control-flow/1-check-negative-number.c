#include <stdio.h>

int main()
{

    // create a variable and get input value
    int number;
    scanf("%d", &number);

    // check if the number is negative or positive or zero
    if (number < 0)
        printf("Negative");
    else if (number > 0)
        printf("Positive");
    else
        printf("Zero");
    printf(" Number");

    return 0;
}