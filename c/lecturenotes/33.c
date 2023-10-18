
#include <stdio.h>
#define SENTINEL 0
// read positive distinct integers until 0 - at least 2 nums - find second max

int main()
{
    int n, max, second_max, temp;
    printf("Enter first two numbers: ");
    scanf("%d %d", &max, &second_max);
    if (max < second_max)
    { // we have to swap
        temp = max;
        max = second_max;
        second_max = temp;
    }
    printf("Enter third number: ");
    for (scanf("%d", &n); n != SENTINEL; scanf("%d", &n))
    {
        if (n > max)
        {
            second_max = max;
            max = n;
        }
        else
        {
            if (n > second_max)
                second_max = n;
        }
        printf("Enter next: ");
    }

    printf("Second max: %d\n", second_max);
}
