#include <stdio.h>
int add(int, int);

int main()
{
    int x = 5, y = 10, sum = 0;
    sum = add(x, y);
    // sum = 15;
    printf("x: %d y: %d sum: %d\n", x, y, sum);
    return 0;
}

int add(int a, int b)
{
    int sum;
    sum = a + b;
    a++; // any change on the output in main?
    return sum;
}
