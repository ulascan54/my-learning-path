#include <stdio.h>
#include <math.h>

// print the digits of a decimal number - from right to left and left to right

int right_to_left(int n)
{
    int power = -1;
    for (; n; n /= 10)
    {
        power++;
        // print the least-significant digit
        printf("%d ", n % 10);
    }
    // printf( "\n" );
    return power;
}

void left_to_right(int n, int power)
{
    int weight = (int)pow(10.0, power);
    for (; weight > 0; weight /= 10)
    {
        printf("%d ", (n / weight) % 10);
    }
    // 2345   2345/1000: 2 2%10: 2   2345/100: 23   23%10: 3    234%10: 4
}

int main()
{
    int n, power;
    printf("Enter n: ");
    scanf("%d", &n);
    power = right_to_left(n);
    printf("\npower: %d\n", power);
    left_to_right(n, power);
}
