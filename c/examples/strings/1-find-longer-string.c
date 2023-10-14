#include <stdio.h>

// function to find the length
int findLength(char text[100])
{
    int count = 0;

    // run a while loop to access each characters
    // inside loop, increase value of count
    while (text[count] == '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    char text1[100];
    char text2[100];

    // get 2 string inputs
    scanf("%s %s", &text1, &text2);

    // find the length of two strings by calling findLength()
    int x = findLength(text1);
    int y = findLength(text2);

    // compare the length of two strings
    // and print the string with the larger length
    if (x > y)
        printf("%s ", text1);
    else
        printf("%s ", text2);

    return 0;
}