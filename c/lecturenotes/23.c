
#include <stdio.h>

/*
print the following:

***** - n stars
 ****
  ***
   **
    *
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
    int n, spaces = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    while (n)
    { // while(n>0)
        print_line(spaces, ' ');
        spaces++;
        print_line(n, ch);
        n--;
        printf("\n");
    }
}
