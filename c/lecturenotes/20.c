#include <stdio.h>

/*
    do
        statement;
    while( condition );
*/
// read grades until negative, print the average
int main()
{
    int grade, sum = 0, count = 0;

    do
    {
        printf("Enter next grade: ");
        scanf("%d", &grade);
        // if( grade >= 0 ){
        count++;
        sum += grade;
        //}
    } while (grade >= 0);

    // fix the mis calculations for the last (negative) grade
    count--;
    sum -= grade;

    // if no grades inform the user else print average
    if (!count)
        printf("No grades!\n");
    else
        printf("%d grades entered, avg: %.3f\n", count, (double)sum / count);

    /*

    // read the first grade before the loop
    printf( "Enter first grade: " );
    scanf( "%d", &grade );

    while( grade >= 0 ){
        count++;
        sum += grade;
        // read the rest of the grades inside the loop
        printf( "Enter next grade: " );
        scanf( "%d", &grade );
    }

    // if no grades inform the user else print average
    if( !count ) printf( "No grades!\n" );
    else printf( "%d grades entered, avg: %f\n", count, (double) sum / count );
    */
}
