#include <stdio.h>
// n! = n * (n-1)!       0! = 1! = 1

int factorial(int);

// sum of numbers from 1 to n
int sum_1_to_n(int n)
{
    // n + (n-1) + (n-2) + ... + 2 + 1 - ITERATION
    // n + ( sum of numbers from 1 to n-1 ) - RECURSION
    // for 1 the result is 1 - NO RECURSIVE CALL - base case
    if (n == 1)
        return 1;
    return n + sum_1_to_n(n - 1);
}

// a^b - a > 0, b >= 0
int power(int a, int b)
{
    printf("power() runs with a: %d, b: %d\n", a, b);
    // a^0 = 1
    if (b == 0)
        return 1;
    // a^b = a * a^(b-1)
    return a * power(a, b - 1);
}

int main()
{
    int a = 5, b = 4, n = 100;
    printf("%d!: %d\n", n, factorial(n));
    printf("sum 1..%d: %d\n", n, sum_1_to_n(n));
    printf("%d^%d: %d\n", a, b, power(a, b));
}

// assume n is 0 or positive
int factorial(int n)
{
    // n * (n-1) * (n-2) * ... * 2 * 1 - ITERATION
    // n! = n * (n-1)! - RECURSION
    if (n < 2)
        return 1;
    // else n >= 2
    return n * factorial(n - 1);
}
