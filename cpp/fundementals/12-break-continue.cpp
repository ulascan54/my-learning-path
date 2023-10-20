#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int i = 0;
    while (i < 10)
    {
        // if (i == 1)
        // {
        //     continue;
        // }
        // while da bu şekilde çalışmaz öncesinde i arttırmamız gerekir.

        if (i == 1)
        {
            i++;
            continue;
        }
        if (i == 5)
        {
            break;
        }
        cout << "i: " << i << endl;
        i++;
    }

    int j = 1;
    for (j = 0; j < 10; j++)
    {
        if (j == 5)
        {
            continue;
        }

        cout << "j:" << j << endl;
    }

    return 0;
}
