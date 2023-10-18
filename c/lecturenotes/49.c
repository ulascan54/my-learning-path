
// 04.05

#include <stdio.h>
int main()
{
    int Grades[4][10] = {{10, 90, 100}, {10, 80, 60}, {80, 90, 100}, {0}};
    int i;
    /*
    Midterm:   80 90 100 0 0 0 ... - 10 values in total
    Final:    100 20 60 0 0 0 ... - 10 values in total
    Average:   0   0  0
    Letter:    0   0  0
    */

    for (i = 0; i < 10; i++)
    {
        Grades[2][i] = 0.3 * Grades[0][i] + 0.7 * Grades[1][i];
        if (Grades[2][i] >= 80)
            Grades[3][i] = 'A';
        else if (Grades[2][i] >= 60)
            Grades[3][i] = 'B';
        else
            Grades[3][i] = 'F';
    }

    // Letters[ 0 ] = 'a';
    printf("Letters: %s\n", Grades[3]);
    for (i = 0; i < 10; i++)
        printf("%c-", Grades[3][i]);
}
