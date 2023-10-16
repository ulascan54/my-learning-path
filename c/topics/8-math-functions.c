#include <stdio.h>
#include <math.h>

int main()
{
    double a = sqrt(9);
    double b = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.14);    // always round up
    int E = floor(3.14);   // always round down;
    double F = fabs(-100); // neagative to positive
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("%d", C);
    return 0;
}