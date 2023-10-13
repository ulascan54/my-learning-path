
#include <stdio.h>

// find the average score and return it
double getAverageScore(double scores[5])
{
    double sum = 0;

    // find the sum
    for (int i = 0; i < 5; ++i)
    {
        sum = sum + scores[i];
    }

    double average = sum / 5;

    return average;
}

// compute grade and return it
char computeGrade(double averageScore)
{
    char grade;

    if (averageScore >= 80.0)
    {
        grade = 'A';
    }
    else if (averageScore >= 60.0)
    {
        grade = 'B';
    }
    else if (averageScore >= 50.0)
    {
        grade = 'C';
    }
    else
    {
        grade = 'F';
    }

    return grade;
}

int main()
{

    // an array of scores
    double scores[5] = {55, 64, 75, 80, 65};

    // get average score
    double averageScore = getAverageScore(scores);

    // get grade
    char grade = computeGrade(averageScore);

    printf("Average Score: %.2lf\n", averageScore);
    printf("Grade: %c", grade);

    return 0;
}