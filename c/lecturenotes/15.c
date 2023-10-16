/*

90 <= grade <= 100 => A
80 <= grade < 90 => B
70 <= grade < 80 => C
0 <= grade < 70 => F

*/
#include <stdio.h>

int main()
{
    int grade;
    char letter;
    printf("Enter grade: ");
    scanf("%d", &grade);

    /*
    if( 90 <= grade )
        letter = 'A';
    else
        if( 80 <= grade )
            letter = 'B';
        else
            if( 70 <= grade )
                letter = 'C';
            else
                letter = 'F';
    */
    if (90 <= grade)
        letter = 'A';
    else if (80 <= grade)
        letter = 'B';
    else if (70 <= grade)
        letter = 'C';
    else
        letter = 'F';

    printf("letter: %c\n", letter);
}
