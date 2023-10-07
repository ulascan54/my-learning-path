#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    or   &&
    and  ||
    not  !
     */
    string sys_name = "ulas";
    string sys_password = "123";

    string name, password;

    while (true)
    {
        cout << "kullanici adinizi giriniz" << endl;
        cin >> name;

        cout << "şifrenizi giriniz" << endl;
        cin >> password;

        if (sys_password != password && name != sys_name)
        {
            cout << "hatalı giriş yapıldı" << endl;
        }
        else if (sys_password != password && name == sys_name)
        {
            cout << "şifre hatalı" << endl;
        }
        else if (sys_password == password && name != sys_name)
        {
            cout << "kullanıcı adı hatalı" << endl;
        }
        else
        {
            cout << "hoşgeldiniz...." << endl;
            break;
        }
    }

    return 0;
}
