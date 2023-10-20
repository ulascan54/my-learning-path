#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str1 = "test string";
    string str2 = "test 2 string";
    string str3 = str1 + " " + str2;

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;

    return 0;
}
