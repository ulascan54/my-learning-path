#include <stdio.h>

int main()
{

    // get input value for number
    int number;
    scanf("%d", &number);

    // run a loop from i = 100 to 1
    for (int i = 100; i >= 1; i--)
    {
        // check if i is divisible by number
        // if yes, print i and exit loop
        if (i % number == 0)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}