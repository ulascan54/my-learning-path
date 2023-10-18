#include <stdio.h>
#include <math.h>

/*
print:
2 3 5 7 - 4 prime numbers in [0, 10]
11 13 17 19 - 4 prime numbers in [10, 20]
...
91 ... - x prime numbers in [90, 100]
*/

int is_prime(int n)
{
    int i, limit;

    if (n < 2)
        return 0;

    // ex: n: 53   n / 2: 26  n / 3: 17 n / 4: 13   sqrt( n ): 7

    for (i = 2, limit = (int)sqrt((double)n); i <= limit; i++)
        if (n % i == 0)
            return 0;
    // if we managed to reach at this point, none of the i values inside the
    // above loop was able to evenly divide n - hence: n is definitely prime
    return 1;
}

int main()
{
    int i, count, j;
    for (i = 0; i <= 90; i += 10)
    {
        for (count = 0, j = i + 1; j < i + 10; j++)
        {
            if (is_prime(j))
            { // if( is_prime( j ) != 0 )
                count++;
                printf("%d ", j);
            }
        }
        printf("- %d prime numbers in [%d, %d]\n", count, i, i + 10);
    }
}