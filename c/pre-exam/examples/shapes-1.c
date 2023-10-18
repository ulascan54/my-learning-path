#include <stdio.h>

void print_line(int i, char c)
{
    int j = 0;
    while (j < i)
    {
        printf("%c", c);
        j++;
    }
}

int main()
{
    char c;
    int n;
    printf("Enter base:");
    scanf("%d", &n);

    printf("Enter char:");
    scanf("\n%c", &c);

    int i = 0;
    while (i < n)
    {
        print_line(i, c);
        printf("\n");
        i++;
    }

    return 0;
}