#include <stdio.h>

int main()
{

    int number;
    int count = 0;

    // get input value for number
    scanf("%d", &number);

    // loop through the integer to calculate the number of digits
    for (int i = number; i > 0; i /= 10)
    {
        count++;
    }

    // print the number of digits
    printf("%d", count);

    return 0;
}