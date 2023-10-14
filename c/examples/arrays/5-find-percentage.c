#include <stdio.h>

int main()
{

    double marks[8];

    // get input value for obtained marks
    for (int i = 0; i < 8; i++)
    {
        scanf("%lf", &marks[i]);
    }

    int totalMarks = 800;
    double obtainedMarks = 0.0;

    // find the sum of obtained marks
    for (int i = 0; i < 8; i++)
    {
        obtainedMarks += marks[i];
    }

    // find the percentage and print it
    double percentage = (obtainedMarks / totalMarks) * 100;
    printf("%.2lf", percentage);

    return 0;
}