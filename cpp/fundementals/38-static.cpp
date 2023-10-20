#include <iostream>

using namespace std;
void Test()
{
    int i = 3;
    i++;

    cout << "i nin değeri:" << i << endl;
}

void Test2()
{
    static int i = 3;
    i++;

    cout << "i nin değeri:" << i << endl;
}
int main(int argc, char const *argv[])
{
    Test();
    Test();
    Test();

    Test2();
    Test2();
    Test2();

    return 0;
}
