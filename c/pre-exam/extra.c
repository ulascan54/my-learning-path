#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findrevz(char *string)
{
    static int i = 0;
    while (1)
    {

        if ((string[i] == 'z' || string[i] == 'Z') && (string[i + 1] == ' ' || string[i + 1] == '\0'))
        {
            break;
        }
        i++;
    }
    printf("reverse:\n");

    while (string[i] != ' ')
    {
        printf("%c", string[i]);
        i--;
    }
    i++;
    printf("\n");

    printf("orginal:\n");

    while (string[i] != '\0')
    {
        if (string[i] == ' ')
        {
            break;
        }

        printf("%c", string[i]);
        i++;
    }
    printf("\n");
    printf("\n");
}

int main()
{
    char s[60] = {"erhan günaydın gidiriyoruz oakdoekfaoekf"};

    findrevz(s);
    return 0;
}
