#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int x, y, z;
    cout << "1.sayiyi giriniz" << endl;
    cin >> x;

    cout << "2.sayiyi giriniz" << endl;
    cin >> y;

    cout << "3.sayiyi giriniz" << endl;
    cin >> z;

    cout << "toplam: " << x + y + z << endl;

    cout << "başka 3 sayi giriniz" << endl;
    cin >> x >> y >> z;
    cout << "toplam: " << x + y + z << endl;

    return 0;
}
