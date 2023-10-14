#include <stdio.h>

int main()
{

    // get input value for number
    int number;
    scanf("%d", &number);

    // run a loop from i = 1 to i < number
    for (int i = 1; i < number; i++)
    {

        // check if number is divisible by i
        if (number % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}