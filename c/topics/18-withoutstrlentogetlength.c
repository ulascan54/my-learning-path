#include <stdio.h>

int main()
{

    char text[] = "This is fun";

    // initial value of length
    int length = 0;

    // loop until the character is '\0'
    while (text[length] != '\0')
    {
        ++length;
    }

    printf("Length: %d", length);

    return 0;
}