#include <iostream>
using namespace std;

int main()
{

    // int *ptr;

    // int a[] = {0, 1, 2, 3, 4, 5};

    // ptr = a;

    // cout << ptr[1] << endl;

    // dynamic memory menagement

    int *ptr = new int;

    *ptr = 5;
    delete ptr;

    return 0;
}
