// write a function to convert a lowercase letter to uppercase

#include <stdio.h>

char to_upper(char c)
{
    return 'A' + (c - 'a');
}

int main()
{
    char ch1, ch2;
    printf("Enter a lowercase letter: ");
    scanf("%c", &ch1);
    ch2 = to_upper(ch1);
    printf("uppercase: %c\n", ch2);
}
