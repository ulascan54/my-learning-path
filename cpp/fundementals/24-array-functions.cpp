#include <iostream>

using namespace std;

void printArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5};

    printArray(a, 5);

    return 0;
}
