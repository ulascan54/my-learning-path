

// 01.06

#include <stdio.h>

double array_avg(int A[], int size)
{
    if (size == 1)
        return A[0];
    return (array_avg(A, size - 1) * (size - 1) + A[size - 1]) / size;
}

int divide(int a, int b)
{
    // a / b = 1 + (a-b) / b
    if (a < b)
        return 0;
    return 1 + divide(a - b, b);
}

int str_len_rec(char *p)
{
    if (!*p)
        return 0;
    return 1 + str_len_rec(p + 1);
}

int count_in_str(char str[], char ch)
{
    if (str[0] == '\0')
        return 0;
    int x = count_in_str(&str[1], ch);
    if (str[0] == ch)
        x++;
    return x;
}

int main()
{
    int A[10] = {5, 7, 20, 8, 4, 0, 0, 0, 0, 10};
    char str[50] = "abc ab", ch = 'c';
    printf("avg: %f\n", array_avg(A, 10));
    printf("10/3: %d\n", divide(10, 3));
    printf("length of \"%s\": %d\n", str, str_len_rec(str));
    printf("%c appears %d times in \"%s\"\n", ch, count_in_str(str, ch), str);
}
