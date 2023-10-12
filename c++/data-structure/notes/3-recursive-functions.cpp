#include <iostream>

using namespace std;

int f1(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int addTwoInteger(int n1, int n2)
{
    return n1 + n2;
}

// recursive
int f2(int n)
{
    if (n == 1 || n == 1)
        return 1;
    else
        return n * f2(n - 1);
}

int main()
{
    cout << f2(5) << endl;

    cout << f1(5) << endl;
    cout << addTwoInteger(5, 5) << endl;
    return 0;
}