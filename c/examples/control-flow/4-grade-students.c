#include <stdio.h>

int main()
{
    double marks;

    // get input value for marks
    scanf("%lf", &marks);

    // check the value of marks and assign grade based on the value
    if (marks > 0 && marks < 70)
        printf("D");
    else if (marks < 80)
        printf("C");
    else if (marks < 90)
        printf("B");
    else if (marks < 101)
        printf("A");
    return 0;
}