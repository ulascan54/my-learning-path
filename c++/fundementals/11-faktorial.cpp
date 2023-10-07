#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cout << "sayı giriniz" << endl;
    cin >> number;
    int result = 1;
    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }

    cout << "reuslt:" << result << endl;
}
