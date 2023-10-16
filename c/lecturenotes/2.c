#include <stdio.h>

int main()
{
    int a = 20, order;
    // char ch1 = 65, lower_ch1; - initial value of ch1 is 'A' - ASCII: 65
    char ch1, lower_ch1;
    printf("your letter: %c\n", ch1);
    printf("Enter a char: ");
    scanf("%c", &ch1);
    printf("your letter: %c\n", ch1);
    if ('A' <= ch1 && ch1 <= 'Z')
    {
        printf("Capital letter\n");
        order = ch1 - 'A';
        lower_ch1 = 'a' + order; // say ch1 is 'C' - order is 2 now
        // lower_ch1 = 'a' + ( ch1 - 'A' );
        printf("your letter in lowercase: %c\n", lower_ch1);
    }
    else
    {
        if ('a' <= ch1 && ch1 <= 'z')
            printf("Normal letter\n");
        else
        {
            if ('0' <= ch1 && ch1 <= '9')
                printf("Digit\n");
            else
                printf("Nor a letter nor a digit\n");
        }
    }

    /* condition to check whether a is in [ 10, 30 ]
    10 < a && a < 30
    */
}