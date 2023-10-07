#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string sys_password = "123";
    string password;
    int i = 3;
    do
    {
        cout << "Enter your password: " << endl;
        cin >> password;

        if (sys_password != password)
        {
            cout << "hatalı tekrar deneyin kalan hakkınız: " << i - 1 << endl;
        }
        i--;

    } while (sys_password != password && i > 0);

    if (sys_password != password)
    {
        cout << "sistemden çıkış yapılıyor.." << endl;
    }
    else
    {
        cout << "parola başarılı.... " << endl;
    }

    return 0;
}
