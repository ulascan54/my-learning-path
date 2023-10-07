#include <iostream>

using namespace std;

int main()
{
    const int i = 32;

    // i = 40; -> hata verir
    cout << i << endl;

    const int a[] = {10,
                     20,
                     30,
                     40,
                     50};

    // a[2] = 100; -> hata verir

    return 0;
}