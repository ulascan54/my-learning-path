#include <stdio.h>

int main()
{

    // get input value for operator
    char op;
    scanf("%c", &op);

    // get input value of first and second
    double first, second;
    scanf("%lf %lf", &first, &second);

    switch (op)
    {
        // perform operations based on the value of op
        // Hint: Follow this format
        // case '+':
        //     printf("%.1lf", first + second);
        //     break;

        // Use cases:
        // case '-': for subtraction
        // case '*': for multiplication
        // case '/': for division

        // if op doesn't match with any of the cases
    case '+':
        printf("%.1lf", (first + second));
        break;
    case '-':
        printf("%.1lf", (first - second));
        break;
    case '*':
        printf("%.1lf", (first * second));
        break;
    case '/':
        printf("%.1lf", (first / second));
        break;
    default:
        printf("Error!");
    }

    return 0;
}