/*

90 <= grade <= 100 => A
80 <= grade < 90 => B
70 <= grade < 80 => C
0 <= grade < 70 => F

*/
#include <stdio.h>

int main()
{
    int grade, tens_in_grade;
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
    /*
    if( 90 <= grade ) letter = 'A';
    else if( 80 <= grade ) letter = 'B';
    else if( 70 <= grade ) letter = 'C';
    else letter = 'F';

    tens_in_grade = grade / 10;

    if( tens_in_grade == 9 || tens_in_grade == 10 ) letter = 'A';
    else if( tens_in_grade == 8 ) letter = 'B';
    else if( tens_in_grade == 7 ) letter = 'C';
    else letter = 'C';
    */

    tens_in_grade = grade / 10;
    switch (tens_in_grade)
    {
    case 10:
    case 9:
        letter = 'A';
        break;
    case 8:
        letter = 'B';
        break;
    case 7:
        letter = 'C';
        break;
    default:
        letter = 'F';
    }

    printf("letter: %c\n", letter);
}