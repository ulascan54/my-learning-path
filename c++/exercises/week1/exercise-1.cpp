#include <iostream>

using namespace std;

int main()
{
    int grade;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter result: " << endl;

        cin >> grade;
        if (grade < 101 && grade > 0)
        {
            if (grade < 50)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2" << endl;
                count++;
            }
        }
    }

    if (count > 8)
    {
        cout << "Raise tuition." << endl;
    }

    return 0;
}
