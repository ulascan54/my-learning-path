#include <stdio.h>

void sort(char array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void sort2(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
}

void printArray2(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int array2[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    char array[] = {'F', 'A', 'D', 'B', 'C'};
    int size = sizeof(array) / sizeof(array[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    sort(array, size);
    sort2(array2, size2);
    printArray(array, size);
    printArray2(array2, size2);

    return 0;
}