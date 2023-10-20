#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string password = "123";

    string input;

    cout << "Enter password: " << endl;
    cin >> input;

    if (password == input)
        cout << "hoşgeldiniz" << endl;
    else
        cout << "hatali giriş" << endl;
    return 0;
}
