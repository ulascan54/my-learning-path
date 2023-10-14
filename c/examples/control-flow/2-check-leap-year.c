#include <stdio.h>

int main()
{

    // get input value for year
    int year;
    scanf("%d", &year);

    // check if year is divisible by 400
    if (year % 400 == 0)
    {
        printf("Leap Year");
    }
    // check if the year is divisible by 4 and doesn't end with 00
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("Leap Year");
    }
    // otherwise print Not a Leap Year
    else
    {
        printf("Not a Leap Year");
    }

    return 0;
}