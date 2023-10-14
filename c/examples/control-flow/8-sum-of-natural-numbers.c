#include <stdio.h>

int main()
{

    // create a variable n
    int n;

    // variable to store the value of sum
    int sum = 0;

    // take input value for n
    scanf("%d", &n);

    // loop runs from 1 to n
    for (int i = 1; i <= n; ++i)
    {
        // add i to sum
        sum += i;
    }

    // print the value of sum
    printf("sum = %d", sum);

    return 0;
}