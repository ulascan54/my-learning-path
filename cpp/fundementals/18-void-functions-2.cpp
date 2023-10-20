#include <iostream>

using namespace std;

void faktorial(int a)
{
    int total = 1;
    for (int i = 1; i <= a; i++)
    {
        total *= i;
    }

    cout << total << endl;
}

int main(int argc, char const *argv[])
{
    int number;
    cout << "sayi giriniz" << endl;
    cin >> number;

    faktorial(number);

    return 0;
}
