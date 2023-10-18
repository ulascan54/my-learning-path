// 22.05 Mon

#include <stdio.h>
#include <string.h>

// strlen in string.h
// assume A will always be valid (null character inside)
int str_len(char A[])
{
    int i;
    /*
    for( i = 0; A[ i ]; i++ ){ // for( i = 0; A[ i ] != '\0' )
        // empty
    }
    */
    for (i = 0; A[i]; i++)
        ;
    return i;
}

int str_len2(char *str)
{
    char *p = str;
    while (*p)
        p++;
    return p - str;
}

// assume dest is large enough to hold the source string
void str_cpy(char dest[], const char src[])
{
    int i;
    for (i = 0; src[i]; i++)
    {
        dest[i] = src[i];
    }
    // dest[ i ] = src[ i ];
    dest[i] = '\0';
}
void str_cpy2(char *dest, char *src)
{
    while (*src)
    {
        *dest++ = *src++;
        /*
        *dest = *src;
        dest++;
        src++;
        */
    }
    *dest = *src;
    // *dest = 0;
}

// strcat - concatenation of strings
void str_cat(char *dest, char *src)
{
    // dest += strlen( dest );
    while (*dest)
        dest++;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = *src;
}

int main()
{
    char str1[50] = "Ayse";
    char str2[50] = "Mehmet";
    printf("The length of \"%s\" is: %d\n", str1, str_len2(str1));
    printf("[before] str1: %s str2: %s\n", str1, str2);
    // str2 = str1;
    //  str_cpy( str2, str1 );
    str_cpy2(str2 + 6, " ");
    str_cpy2(str2 + 7, str1);
    printf("[after ] str1: %s str2: %s\n", str1, str2);
    str_cat(str2, " ");
    str_cat(str2, str1);
    printf("[after concat ] str1: %s str2: %s\n", str1, str2);
}
