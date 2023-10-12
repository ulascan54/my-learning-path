#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        multiple comments
        escape characters
        \t
        \n newline
    */

    char characterName[] = "John";
    int characterAge = 67;

    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old.\n", characterAge);

    // create variables

    int number = 15;          // integer value
    float floatNumber = 5.99; // floating point value
    char letter = 'B';        // One character
    char name[] = "John";     // char array

    printf("%s\n", name);
    printf("%d\n", number);
    printf("%c\n", letter);
    printf("%f\n", floatNumber);
    return 0;
}