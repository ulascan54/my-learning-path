
// 18.05

#include <stdio.h>

int main()
{
    // char Name[ 11 ] = { 'A', 'l', 'i' };
    char Name[20] = "Ali";
    // int A[ 5 ] = "51020"; - NOT ALLOWED
    // The character with code zero - in ASCII also - is named as NULL character
    // and is commonly used at the and of strings to mark the end of the string
    // that char is equal to 0, '\0'

    printf("%s\n", Name);
    printf("Enter new name: ");
    scanf("%s", Name);
    printf("New name: %s\n", Name);

    Name[0] = 'A';
    Name[1] = 'y';
    printf("New name: %s\n", Name);

    int A[11] = {3, 4, 8, 9, -1};

    // Name = "Mehmet";
    // NOT ALLOWED because Name actually holds an integer - address inside
    // Logically you could do Name = 55949585954 but that is not allowed ALSO, because NAME is a pointer but CONST pointer
}
