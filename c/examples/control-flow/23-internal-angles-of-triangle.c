#include <stdio.h>

int main()
{
    int a, b, c;

    // get 3 input values
    scanf("%d %d %d", &a, &b, &c);

    // find the sum
    int sum = a + b + c;

    // check if sum is equal to 180 and print either true or false
    if (sum == 180)
        printf("true");
    else
        printf("false");

    return 0;
}