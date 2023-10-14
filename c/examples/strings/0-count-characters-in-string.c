#include <stdio.h>

int main()
{
    char text[100];

    // get input string
    fgets(text, sizeof(text), stdin);

    // variable to count number of characters
    int count = 0;

    // use while loop with condition
    // if first character of text is not equal to '\0'
    while (text[count] != '\0')
    {
        count++;
    }

    // print count
    printf("%d", count);

    return 0;
}