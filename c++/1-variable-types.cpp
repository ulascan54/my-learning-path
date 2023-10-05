#include <iostream>

using namespace std;

int main()
{
    /*
        Değişken tipleri ve değişkenler

        int
        float
        double
        char
        bool

    */

    int a = 32;
    float b = 3.52;
    double c = 4.546;
    char d = 'A';
    bool e = false;

    cout << "a değişkenin değeri: " << a << endl;
    cout << "b değişkenin değeri: " << b << endl;
    cout << "c değişkenin değeri: " << c << endl;
    cout << "d değişkenin değeri: " << d << endl;
    cout << "e değişkenin değeri: " << e << endl;

    int n1, n2, n3, sum = 0;

    n1 = 4;
    n2 = 3;
    n3 = 5;
    sum = n1 + n2 + n3;

    cout << "toplam: " << sum << endl;

    return 0;
}
