#include <iostream>

using namespace std;

template <typename T>
T sum(T a, T b)
{
    cout << typeid(T).name() << std::endl;
    return a + b;
}

int main(int argc, char const *argv[])
{
    cout << sum(15, 15) << endl;
    cout << sum(15.4f, 15.5f) << endl;
    cout << sum(15.0, 15.0) << endl;

    return 0;
}
