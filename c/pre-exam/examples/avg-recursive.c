

// 01.06

#include <stdio.h>

double array_avg(int A[], int size)
{
    if (size == 1)
        return A[0];
    return (array_avg(A, size - 1) * (size - 1) + A[size - 1]) / size;
}

double array_avg2(int A[], int size)
{
    static int i = -1;
    i++;
    if (i == size - 1)
        return A[i];
    if (i == 0)
    {
        return (A[i] + array_avg2(A, size)) / (size);
    }
    return array_avg2(A, size) + A[i];
}

double array_avg_recursive(int A[], int size)
{
    static int currentIndex = -1;
    static double currentSum = 0;
    if (currentIndex == size)
    {
        return currentSum / size;
    }
    else
    {
        currentIndex++;
        currentSum += A[currentIndex];
        return array_avg_recursive(A, size);
    }
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

int count_in_str2(char str[], char ch)
{
    static int x = 0;
    if (str[0] == '\0')
        return x;
    if (str[0] == ch)
    {
        x++;
        return count_in_str(&str[1], ch);
    }
    return count_in_str(&str[1], ch);
}

int main()
{
    int A[10] = {5, 7, 20, 8, 4, 3, 4, 3, 2, 10};
    double sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += A[i];
    }
    printf("avg:%f\n", sum / 10);

    char str[50] = "abc abc ccerc", ch = 'c';
    printf("avg: %f\n", array_avg(A, 10));
    printf("avg: %f\n", array_avg2(A, 10));
    printf("avg: %f\n", array_avg_recursive(A, 10));
    printf("10/3: %d\n", divide(10, 3));
    printf("length of \"%s\": %d\n", str, str_len_rec(str));
    printf("%c appears %d times in \"%s\"\n", ch, count_in_str(str, ch), str);
    printf("%c appears %d times in \"%s\"\n", ch, count_in_str2(str, ch), str);
}
