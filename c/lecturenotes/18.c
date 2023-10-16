// 20.03

#include <stdio.h>
void print_a_b_diff_up_down(int a, int b, int diff)
{ // assume -3 <= diff <= 3
    int i = a;
    // try to solve it using if statements - check whether a < b or a > b
    // diff is always positive
    // i = a; // both for upwards and downwards
    if (a < b)
    {
        while (i <= b)
        {
            printf("%d ", i);
            i += diff;
        }
    }
    else
    { // downwards
        while (i >= b)
        {
            printf("%d ", i);
            i -= diff;
        }
    }
}

int main()
{
    // print_1_100();
    printf("\n\n");
    // print_a_b( 40, 30 );
    print_a_b_diff_up_down(10, 50, 3);
}
