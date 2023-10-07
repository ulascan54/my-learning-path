#include <iostream>

using namespace std;

int toplam(int a, int b, int c)
{
    return a + b + c;
}

int main(int argc, char const *argv[])
{
    int result = toplam(2, 3, 4);

    cout << result << endl;

    return 0;
}
