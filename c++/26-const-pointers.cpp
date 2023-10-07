#include <iostream>
using namespace std;

void printArray(const int *ptr1, const int *ptr2)
{
    for (; ptr1 != ptr2; ptr1++)
    {
        cout << "Eleman: " << *ptr1 << endl;
    }
}

int main()
{
    int array[] = {10,
                   20,
                   30,
                   40,
                   50,
                   60,
                   70,
                   80,
                   90,
                   100};

    printArray(array + 2, array + 7);
    return 0;
}