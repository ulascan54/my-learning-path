/******************************************************************************

while (loop repetition condition)
    statement;

*******************************************************************************/
#include <stdio.h>

// print 1 2 3 4 ... 99 100 on the screen with a function
void print_1_100(void)
{
    int i; // loop control variable

    i = 1; // initialization of the loop control variable
    while (i <= 100 /* i != 101  */)
    { // loop repetition condition
        printf("%d ", i);
        i++; // update of the loop control variable
        // printf( "%d ", i++ );
    }

    /*
    i = 0;
    while( i < 100 ) printf( "%d ", ++i );

    EQV TO

    while( i < 100 ){ i++; printf( "%d ", i ); }
    */

    /*
    i = 99; // initialization of the loop control variable
    while( i != -1 ){ // loop repetition condition
        printf( "%d ", 100-i );
        i--; // update of the loop control variable
    }
    */
}

void print_a_b(int a, int b)
{
    int i = a;
    while (i <= b)
        printf("%d ", i++);
}

void print_a_b_diff(int a, int b, int diff)
{
    int i = a;
    while (i <= b)
    {
        printf("%d ", i);
        i += diff;
    }
}

void print_a_b_diff_up_down(int a, int b, int diff)
{ // assume -3 <= diff <= 3
    int i = a;
    while (i != b + ((diff > 0) + (diff < 0) * (-1)) &&
           i != b + 2 * ((diff > 0) + (diff < 0) * (-1)) &&
           i != b + 3 * ((diff > 0) + (diff < 0) * (-1)))
    {
        printf("%d ", i);
        i += diff;
    }

    // try to solve it using if statements - check whether a < b or a > b
}

int main()
{
    // print_1_100();
    printf("\n\n");
    // print_a_b( 40, 30 );
    print_a_b_diff_up_down(10, 50, 3);
}