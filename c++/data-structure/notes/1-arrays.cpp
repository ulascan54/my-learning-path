#include <iostream>

using namespace std;

int *createArrayAndSet(int len)
{
    int *array = new int[len];
    for (int i = 0; i < len; i++)
    {
        array[i] = rand() % 100;
    }

    return array;
}

void getValuesOfArray(int *array, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "p+" << i << " -> " << *(array + i) << endl;
    }
}

int main()
{
    int dizi[] = {1,
                  2,
                  3,
                  4,
                  5,
                  6};
    int *p = dizi;

    cout << "p: " << p << endl;
    cout << "dizi[0]: " << &dizi[0] << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << "p+" << i << " -> " << p + i << endl;
        // cout << "p+" << i << " -> " << p ++ << endl;
        //  bu şekilde de kullanıla bilir ancak forun sonunda pointerın
        //  değeri değişeceği için karışıklık yaratabilir.
    }

    int *arr = createArrayAndSet(10);
    getValuesOfArray(arr, 10);
}