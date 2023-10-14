#include <stdio.h>

int main()
{

    double sellingPrice, profitPercent;

    // get input value for sellingPrice and profit percent
    scanf("%lf", &sellingPrice);
    scanf("%lf", &profitPercent);

    // use the formula for calculating cost price
    double costPrice = (sellingPrice * 100.0) / (100 + profitPercent);

    // print the cost price value upto 2 decimal point
    printf("%.2lf", costPrice);

    return 0;
}