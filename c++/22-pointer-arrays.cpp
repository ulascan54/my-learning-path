#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int array[] = {1,
                   2,
                   3,
                   4};
    cout << array << endl;
    cout << array + 1 << endl;
    cout << array + 2 << endl;
    cout << "--------------" << endl;

    int *ptr = array;

    cout << ptr << endl;
    cout << ptr + 1 << endl;

    int *ptr2 = &array[2];

    cout << ptr2 << endl;

    string array2[] = {"ulaş",
                       "can",
                       "demirbağ"};
    string *p = array2;

    cout << p << endl;
    cout << p + 1 << endl;
    cout << p + 2 << endl;
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << p[0] << endl;
    cout << p[1] << endl;
    cout << p[2] << endl;

    return 0;
}
