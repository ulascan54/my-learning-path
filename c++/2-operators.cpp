#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
        <-Matematik operatorleri->
        *,+,/,-

        artttırma ++
        azaltma --
    */

    int n1 = 10, n2 = 4;

    cout << "Sayi1 + Sayi2 = " << n1 + n2 << endl;
    cout << "Sayi1 - Sayi2 = " << n1 - n2 << endl;
    cout << "Sayi1 * Sayi2 = " << n1 * n2 << endl;
    cout << "Sayi1 / Sayi2 = " << n1 / n2 << endl;
    cout << "Sayi1 / Sayi2 = " << float(n1) / n2 << endl;

    int n3 = 5;

    cout << "Sayi değeri: " << n3 << endl;
    n3++;
    cout << "Sayinin yeni değeri: " << n3 << endl;
    n3 += 20;
    cout << "Sayinin yeni değeri: " << n3 << endl;

    return 0;
}
