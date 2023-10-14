#include <stdio.h>

int main()
{
    int x;
    int y;

    // get input values for x and y
    scanf("%d", &x);
    scanf("%d", &y);

    // create a temporary variable
    int temp;

    // swap values using temp
    temp = y;
    y = x;
    x = temp;

    // print values after swapping
    printf("%d\n", x);
    printf("%d", y);

    return 0;
}