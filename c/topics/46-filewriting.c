#include <stdio.h>

int main()
{
    // WRITE/APPEND A FILE
    FILE *pF = fopen("Users\\ulas\\Desktop\\test.txt", "w");

    fprintf(pF, "Spongebob Squarepants");

    fclose(pF);

    // DELETE A FILE
    /*
    if(remove("test.txt") == 0)
    {
       printf("That file was deleted successfully!");
    }
    else
    {
       printf("That file was NOT deleted!");
    }
    */
    return 0;
}