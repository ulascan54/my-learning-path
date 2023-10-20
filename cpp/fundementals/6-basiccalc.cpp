#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int calcType, x, y;

    cout << "1.İşlem: Toplama İşlemi" << endl;
    cout << "2.İşlem: Çikarma İşlemi" << endl;
    cout << "3.İşlem: Çarpma İşlemi" << endl;
    cout << "4.İşlem: Bölme İşlemi" << endl;
    cin >> calcType;

    cout << "2 sayi giriniz" << endl;
    cin >> x >> y;

    if (calcType == 1)
    {
        cout << "işlemin sonucu: " << x + y;
    }
    else if (calcType == 2)
    {
        cout << "işlemin sonucu: " << x - y;
    }
    else if (calcType == 3)
    {
        cout << "işlemin sonucu: " << x * y;
    }
    else if (calcType == 4)
    {
        cout << "işlemin sonucu: " << x / y;
    }
    else
    {
        cout << "HATALI BIR ISLEM YAPILDI" << endl;
    }

    return 0;
}
