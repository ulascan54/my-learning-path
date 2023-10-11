#include <iostream>
using namespace std;

int main()
{
    int *dizi[5];
    dizi[2] = new int[2];
    dizi[2][0] = 1;
    dizi[2][1] = 2;
    cout << dizi[2][0] << endl;

    delete[] dizi[2];

    return 0;
}