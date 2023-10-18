// 08.05 Mon

// multiply two integers with a function, without return statement
#include <stdio.h>

void multiply(int, int, int *);

int main()
{
    int a = 5, b = 10, c = 8;
    multiply(a, b, &c);
    // x of multiply receives 5
    // y of multiply receives 10
    // z of multiply receives 1000000 --- assuming &c is 1000000
    // we will have a*b in c
    printf("c: %d\n", c);
}

void multiply(int x, int y, int *z)
{
    *z = x * y;
    // c = x * y .... a * b
}
