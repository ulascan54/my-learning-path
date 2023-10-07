#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int size;
    cout << "kaç değer tutulacak ?" << endl;
    cin >> size;

    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "değer:";
        cin >> ptr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << "eleman: " << ptr[i] << endl;
    }

    delete[] ptr;

    return 0;
}
