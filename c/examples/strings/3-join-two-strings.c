// Replace ___ with your code
#include <stdio.h>
#include <string.h>

int main()
{
    char text1[100];
    char text2[100];

    // get string input using scanf
    scanf("%s ", &text1);
    scanf(" %s", &text2);

    // join two string using strcat and add space between them
    // Hint: join text1 with string " " then only join it with text2
    strcat(text1, " ");
    strcat(text1, text2);

    // print joined string
    printf("%s", text1);

    return 0;
}