#include <stdio.h>

int main()
{

    // create a variable named correctNumber
    int correctNumber = 18;

    // get input for guessedNumber variable
    int guessedNumber;
    scanf("%d", &guessedNumber);

    // use if-else statement to check if the guess is correct or not
    if (guessedNumber > correctNumber)
        printf("Wrong, your guess is larger");

    else if (guessedNumber < correctNumber)
        printf("Wrong, your guess is smaller");
    else
        printf("Your guess is correct");

    return 0;
}