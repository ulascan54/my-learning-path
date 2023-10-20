#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    int *ptr = &a;

    cout << "değişken adresi:" << &a << endl;
    cout << "değişken adresi:" << ptr << endl;

    cout << "değişken verisi:" << *ptr << endl;

    *ptr = 6;
    cout << "değişkenin yeni değeri a:" << a << endl;

    return 0;
}
