
/******************************************************************************
find Euler number using 1/0! + 1/1! + 1/2! + ... 1/n!
*******************************************************************************/
#include <stdio.h>

int main()
{
    double e;
    int i;
    long factorial;
    for (i = 1, factorial = 1, e = 0.0; i < 70; i++)
    {
        e += 1.0 / factorial;
        factorial *= i;
    }
    printf("e:%f\n", e);
}
