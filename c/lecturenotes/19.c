#include <stdio.h>
void print_lowercase_letters()
{
    char i = 'a';
    while (i <= 'z')
    {
        printf("%c ", i);
        i++;
    }
}
void print_uppercase_letters()
{
    char i = 'A';
    while (i <= 'Z')
    {
        printf("%c ", i);
        i++;
    }
}
int main()
{
    print_lowercase_letters();
    printf("\n");
    print_uppercase_letters();
}
