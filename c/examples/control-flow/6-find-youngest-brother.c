#include <stdio.h>

int main()
{

    int jack;
    int roman;
    int johnny;

    // get age input for jack, roman and johnny
    scanf("%d %d %d", &jack, &roman, &johnny);

    // use if else to find the youngest brother
    if (jack < roman && jack < johnny)
        printf("Jack");
    else if (roman < jack && roman < johnny)
        printf("Roman");
    else
        printf("Johnny");

    return 0;
}