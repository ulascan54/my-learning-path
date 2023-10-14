#include <stdio.h>

int main()
{
    double costPrice, sellingPrice;

    // take input for cost and cell
    scanf("%lf %lf", &costPrice, &sellingPrice);

    // compute the profit
    double profit = sellingPrice - costPrice;

    // compute profit percent
    double profitPercent = (profit / costPrice) * 100;

    // print values
    printf("%.2lf\n", profit);
    printf("%.2lf", profitPercent);

    return 0;
}