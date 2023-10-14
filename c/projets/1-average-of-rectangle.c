#include <stdio.h>

int main()
{
    int length;
    int breadth;

    // get length and breadth input
    scanf("%d", &length);
    scanf("%d", &breadth);

    // find the area
    int area = length * breadth;

    // print the area
    printf("%d", area);

    return 0;
}