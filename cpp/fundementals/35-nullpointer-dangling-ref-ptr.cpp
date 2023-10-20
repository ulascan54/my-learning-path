#include <iostream>
using namespace std;

int main()
{
    int *ptr = nullptr;

    ptr = new int;

    *ptr = 10;

    delete ptr;
    // dangling reference
    *ptr = 10;

    cout << *ptr << endl; // runtime error

    int *ptr1 = nullptr;
    int *ptr2 = nullptr;

    ptr1 = new int;

    *ptr1 = 10;

    ptr2 = ptr1;

    delete ptr1;
    // dangling reference

    *ptr2 = 20;
    cout << *ptr2 << endl; // runtime error

    return 0;
}
