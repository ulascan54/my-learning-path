#include <stdio.h>

// create function findLCM() with parameters num1 and num2
// compute lcm of two values and return it
int findLCM(int x, int y)
{
    int max = (x > y) ? x : y;
    int lcm = max;

    while (1)
    {
        if (lcm % x == 0 && lcm % y == 0)
        {
            return lcm;
        }
        lcm += max;
    }
}

int main()
{

    // get input value for x and y
    int x, y;
    scanf("%d %d", &x, &y);

    // call findLCM() with arguments x and y
    int lcm = findLCM(x, y);

    // print the returned value
    printf("%d", lcm);

    return 0;
}