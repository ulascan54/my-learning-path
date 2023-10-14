#include <stdio.h>

int main()
{
    int chocolate;
    int children;

    // get input values for chocolate and children
    scanf("%d", &chocolate);
    scanf("%d", &children);

    // find number of chocolate each children gets using the / operator
    int n = chocolate / children;

    // find remaining chocolate using the % operator
    int x = chocolate % children;

    printf("%d\n", n);
    printf("%d", x);

    return 0;
}