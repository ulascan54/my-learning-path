#include <iostream>
using namespace std;

template <typename T>
T inc(T x)
{
    return x + 1;
}

template <typename T> //<class T>
void change(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

template <class T>
class myClass
{
public:
    T data;
    myClass(T data) : data(data) {}
};

int main()
{
    myClass<int> z(10);
    cout << z.data << endl;
    int a = 5;
    int b = 10;

    cout << a << "\t" << b << endl;
    change(a, b);
    cout << a << "\t" << b << endl;

    string c = "afef";
    string d = "xxefef";

    cout << c << "\t" << d << endl;
    change(c, d);
    cout << c << "\t" << d << endl;

    cout << inc(1) << endl;
    cout << inc(2.3);

    return 0;
}