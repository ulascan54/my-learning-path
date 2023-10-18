

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
    scanf("%d", &n);

    while (n != SENTINEL)
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
        scanf("%d", &n);
    }

    printf("Second max: %d\n", second_max);

    /* swap a and b without temp --- say: a: 5   b: 10
        a = a + b;   a: 15
        b = a - b;   b: 5
        a = a - b;   a: 10
    */
}

// 30.03
