#include <stdio.h>

// create function findGCD with parameters: num1 and num2
// compute the gcd of two numbers and return it
int findGCD(int x, int y)
{
    int g;
    if (x > y)
        g = x;

    else
    {
        g = y;
        y = x;
    }

    for (int i = g; i >= 2; i--)
    {
        if (g % i == 0 && x % i == 0)
        {
            return i;
        }
    }
}

int main()
{

    // get input values for x and y
    int x, y;
    scanf("%d %d", &x, &y);

    // call findGCD() with arguments x and y
    int gcd = findGCD(x, y);

    // print the returned value
    printf("%d", gcd);

    return 0;
}