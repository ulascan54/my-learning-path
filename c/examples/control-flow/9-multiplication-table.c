#include <stdio.h>

int main()
{

    // create a number variable
    int number;

    // take input value for number
    scanf("%d", &number);

    // use while loop to run from 1 to 10
    // print multiplication table inside the while loop
    int count = 1;
    while (count < 11)
    {
        printf("%d * %d = %d\n", number, count, (number * count));
        count++;
    }

    return 0;
}