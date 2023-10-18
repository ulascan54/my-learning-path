

// 27.04

#include <stdio.h>
// PARALLEL ARRAYS

void assign_letter(char A[], int i, double avg)
{
    if (avg >= 80.0)
        A[i] = 'A';
    else if (avg >= 60.0)
        A[i] = 'B';
    else
        A[i] = 'F';
}

/*
char assign_letter( double avg ){
    char x;
    if( avg >= 80.0 ) x = 'A';
    else if( avg >= 60.0 ) x = 'B';
    else x = 'F';
    return x;
}
*/

int main()
{
    int Midterm[10] = {100, 60};
    int Final[10] = {100, 100, 100};
    // average = 30% * Mid + 70% * Final
    double Averages[10];
    char Letters[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        Averages[i] = 0.3 * Midterm[i] + 0.7 * Final[i];
        assign_letter(Letters, i, Averages[i]);
        // Letters[ i ] = assign_letter( Averages[ i ] );
    }

    // Letters[ 0 ] = 'a';
    printf("Letters: %s\n", Letters);
}
