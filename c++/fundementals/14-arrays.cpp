#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int array[3];
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;

    cout << "1.index: " << array[0] << endl;
    cout << "2.index: " << array[1] << endl;
    cout << "3.index: " << array[2] << endl;

    int array2[] = {10,
                    20,
                    30,
                    40};
    double array3[] = {1.2,
                       1.3,
                       1.4,
                       1.5};

    for (int i = 0; i < 4; i++)
    {
        cout << i << ".index değeri:" << array2[i] << endl;
        cout << i << ".index değeri:" << array3[i] << endl;
    }

    int array4[4];

    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << ".sayıyı giriniz:" << endl;
        cin >> array4[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << i << ".index değeri:" << array4[i] << endl;
    }

    return 0;
}
