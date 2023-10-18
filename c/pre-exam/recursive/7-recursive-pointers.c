/*
author: ulaşcan

question:


*/

#include <stdio.h>

double avg(int *p, int *q)
{
    if (p == q)
    {
        return 0;
    }
    return p[0] + avg(p + 1, q) / (q - p);
}

int main()
{
    int numbers[7] = {1,
                      2,
                      3,
                      4,
                      5,
                      6,
                      7};

    double result = avg(&numbers[0], &numbers[7]);
    printf("%f", result);

    return 0;
}