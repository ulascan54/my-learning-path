#include <stdio.h>

/*
print the following:

     * - 1
    *** - 3
   ***** - 5
...
** n ***** - n

*/

// function printing k ch's on a single line
void print_line(int k, char ch)
{
    int i;
    i = 0;
    while (i < k)
    {
        printf("%c", ch);
        i++;
    }
}

int main()
{
    const char ch = '*';
    int n, i, spaces;
    printf("Enter base ( odd ): ");
    scanf("%d", &n);
    spaces = n / 2;
    i = 1;
    while (i <= n)
    { // while(spaces>=0)
        print_line(spaces, ' ');
        spaces--;
        print_line(i, ch);
        i += 2;
        printf("\n");
    }
}
