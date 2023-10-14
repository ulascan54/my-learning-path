#include <stdio.h>

int main()
{

    int length;

    // take input value for length
    scanf("%d", &length);

    // compute the volume
    int volume = length * length * length;

    // print the volume
    printf("%d", volume);

    return 0;
}