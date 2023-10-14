#include <stdio.h>

int main()
{

    int sum = 0;
    int number;

    // run a while loop that breaks only if input value is 0
    // if input value is other than 0, add it to sum
    while (1)
    {
        scanf("%d", &number);
        if (number == 0)
            break;
        sum += number;
    }

    // print the sum
    printf("%d", sum);

    return 0;
}