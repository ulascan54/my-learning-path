#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, hipo;
    printf("Enter a\n");
    scanf("%lf", &a);
    printf("Enter b\n");
    scanf("%lf", &b);
    hipo = sqrt(pow(a, 2) + pow(b, 2));

    printf("hipo %.1lf\n", hipo);

    return 0;
}