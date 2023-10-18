#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        printf("%d\n", i);
        for (j = 1; j <= i; j++)
        {
            printf("\t%d\n", j);
        }
    }
    // printf( "\t1\n\t2\n\t3\n\t4\n\t5\n" );
}
