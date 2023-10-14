#include <stdio.h>

int main()
{

    // loop from 1 to 10
    // inside loop check whether i is divisible by 3
    for (int i = 1; i <= 10; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}