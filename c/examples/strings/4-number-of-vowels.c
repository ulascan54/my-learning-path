#include <stdio.h>
#include <ctype.h>

int main()
{

    char text[150];

    // get input value for text using fgets()
    fgets(text, sizeof(text), stdin);

    // variable to count number of vowels
    int vowels = 0;

    // loop to access each character of text
    for (int i = 0; text[i] != '\0'; ++i)
    {
        char ch = tolower(text[i]);

        // check if character at ith position is a vowel (lowercase or uppercase)
        if ((ch >= 'a' && ch <= 'z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
        }
    }

    // print the value of vowel
    printf("%d", vowels);

    return 0;
}