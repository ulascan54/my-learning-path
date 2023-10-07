#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int islem;

    cout << "islem giriniz" << endl;
    cin >> islem;

    switch (islem)
    {
    case 1:
        cout << "1. islemi  seçtiniz" << endl;
        break;

    case 2:
        cout << "2. islemi  seçtiniz" << endl;
        break;

    case 3:
        cout << "3. islemi  seçtiniz" << endl;
        break;

    case 4:
        cout << "4. islemi  seçtiniz" << endl;
        break;

    default:
        cout << "geçersiz işlem" << endl;
        break;
    }

    return 0;
}
