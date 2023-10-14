#include <stdio.h>

// create a function that checks if a number is armstrong
// prints the number is it is an armstrong number
// Hint: Look into the description above to find out the workflow of the checkArmstrong() function
void checkArmstrong(int x)
{
    int sum = 0;
    int a = x;
    for (int i = 0; i < 3; i++)
    {
        int digit = a % 10;
        sum += (digit * digit * digit);
        a /= 10;
    }
    if (sum == x)
    {
        printf("%d\n", x);
    }
}

int main()
{
    // get input values for x and y
    int x, y;
    scanf("%d %d", &x, &y);

    // run loop from x to y
    // call checkArmstrong() for each value from x
    while (x <= y)
    {
        checkArmstrong(x);
        x++;
    }

    return 0;
}