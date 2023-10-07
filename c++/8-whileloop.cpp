#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 1;
    int j = 1;

    while (i < 10 || j < 5)
    {
        cout << "i:" << i << endl;
        cout << "j:" << j << endl;
        i++;
        j++;
    }

    return 0;
}
