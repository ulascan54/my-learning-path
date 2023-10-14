#include <stdio.h>

int main()
{

    // get input value for the age
    int age;
    scanf("%d", &age);

    // check if the age is greater than or equal to 18
    if (age >= 18)
        printf("Can Vote");
    else
        printf("Cannot Vote");

    return 0;
}