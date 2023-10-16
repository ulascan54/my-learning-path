// using '*'s print triangles, rectangles...

#include <stdio.h>

void tringle(void)
{
    printf("   *\n");
    printf("  * *\n");
    printf(" *   *\n");
    printf("*******\n");
}

void square()
{
    printf("********\n");
    printf("*      *\n");
    printf("*      *\n");
    printf("*      *\n");
    printf("********\n");
}

int main()
{
    tringle();
    printf("\n");
    square();
    square();
    printf("\n");
    tringle();
}
