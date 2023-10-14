#include <stdio.h>

// create a function that checks if a number is prime or not
// Hint: Look into the challenge description for the working of function
void isPrime(int x)
{
    int count = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
        printf("%d\n", x);
}

int main()
{

    int x, y;
    scanf("%d %d", &x, &y);

    // run the loop from x to y
    // for each iteration of loop call isPrime()
    for (int i = x; i <= y; ++i)
    {
        isPrime(i);
    }

    return 0;
}