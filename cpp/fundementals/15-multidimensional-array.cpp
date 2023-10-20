#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int matrix[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 2)
            {
                cout << matrix[i][j] << "";
                continue;
            }
            cout << matrix[i][j] << ",";
        }
        cout << endl;
    }

    return 0;
}
