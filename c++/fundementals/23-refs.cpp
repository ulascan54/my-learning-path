#include <iostream>

void change(int &ref)
{
    ref = 20;
}

using namespace std;
int main(int argc, char const *argv[])
{
    int a = 10;
    int &ref = a;

    ref++;

    cout << "a'nın yeni değeri" << endl;
    change(a);
    cout << "a'nın yeni değeri" << endl;

    return 0;
}
