#include <iostream>

using namespace std;
void change(int x)
{
    x = 20;
    cout << " fonksiyon içindeki x: " << x << endl;
}

void change2(int *ptr)
{
    *ptr = 20;
    cout << " fonksiyon içindeki değer: " << *ptr << endl;
}

int main(int argc, char const *argv[])
{
    // call by value
    int a = 10;
    cout << "a değeri fonsiyon çalışmadan önce: " << a << endl;
    change(a);
    cout << "a değeri fonsiyon çalıştıktan sonra: " << a << endl;

    // call by ref
    cout << "a değeri fonsiyon çalışmadan önce: " << a << endl;
    change2(&a);
    cout << "a değeri fonsiyon çalıştıktan sonra: " << a << endl;

    return 0;
}
