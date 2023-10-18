#include <stdio.h>

int str_cmp(char *p, char *q)
{
    // ab      ab            abc       ab
    // ab      abc           ab        ac
    while (*p && *q && *p == *q)
    {
        p++;
        q++;
    }
    return *p - *q;
}

// write a function which appends n chars from one string to the other - strncat

// word count
// assume exactly one space between words, no spaces in the beginning and in the end
int word_count1(char *str)
{
    int count = 0;
    char *p = str;
    if (*p)
    {
        while (*p)
        {
            if (*p == ' ')
                count++;
            p++;
        }
        return count + 1;
    }
    return 0;
}

// word count 2
// no assumption
// start assuming that at least one space in the beginning
// assumption fixed with the if statement at the end
int word_count2(char *str)
{
    int count = 0;
    char *p = str;
    while (*p)
    {
        if (*p == ' ' && *(p + 1) != ' ' && *(p + 1))
            count++;
        p++;
    }
    if (*str != ' ' && *str)
        count++;
    return count;
}

void str_rev(char *p)
{
    char *q = p, temp;
    for (; *q; q++)
        ;
    q--;
    while (p < q)
    {
        // swap chars
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
}

int main()
{
    char str1[50] = " a              bfg";
    char str2[50] = "Abc x";
    char *p;
    int cmp;
    p = str2;

    if (str2 == str1)
        printf("1\n");
    else
        printf("0\n");
    if (str2 == p)
        printf("1\n");
    else
        printf("0\n");
    cmp = str_cmp(str1, str2);
    if (cmp == 0)
        printf("Equal strings\n");
    else if (cmp < 0)
        printf("%s comes before %s\n", str1, str2);
    else
        printf("%s comes before %s\n", str2, str1);

    printf("word count in %s: %d\n", str1, word_count2(str1));

    printf("str2 before rev: %s\n", str2);
    str_rev(str2);
    printf("str2 after  rev: %s\n", str2);
}
