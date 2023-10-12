#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0,
                   0,
                   0,
                   0,
                   0,
                   0,
                   0,
                   0,
                   0};
    int type;
    bool isSit = false;
    bool stop = true;
    char prompt;
    int countEmpty = 0;
    while (stop)
    {
        countEmpty = 0;

        cout << "---------------------------" << endl;
        cout << "Available tickets" << endl;
        cout << "---------------------------" << endl;
        for (int i = 0; i < 10; i++)
        {
            if (i >= 6)
            {
                cout << "[" << arr[i] << "]";
                if (!(i == 9))
                {
                    cout << "-";
                }
            }
            else
            {
                cout << arr[i] << "-";
            }
        }
        cout << endl;
        cout << "---------------------------" << endl;

        cout << "Class types" << endl;
        cout << "1.first class" << endl;
        cout << "2.economy class" << endl;
        cout << "Enter your ticket class:" << endl;
        cin >> type;

        if (type == 2)
        {
            for (int i = 0; i < 6; i++)
            {
                if (arr[i] == 0)
                {
                    arr[i] = 1;
                    isSit = true;
                    break;
                }
            }
            if (isSit == true)
            {
                isSit = false;
                cout << "See you have a good journey" << endl;
            }
            else
            {
                cout << "there is no empty slot in economy sry." << endl;
            }
        }
        else if (type == 1)
        {
            for (int i = 6; i < 11; i++)
            {
                if (arr[i] == 0)
                {
                    arr[i] = 1;
                    isSit = true;
                    break;
                }
            }
            if (isSit == true)
            {
                isSit = false;
                cout << "See you have a good journey" << endl;
            }
            else
            {
                cout << "there is no empty slot in first class sry." << endl;

                for (int i = 0; i < 6; i++)
                {
                    if (arr[i] == 0)
                    {
                        isSit = true;
                        break;
                    }
                }
                if (isSit == true)
                {
                    isSit = false;
                    cout << "But, there is avaible empty slot in economy class would you like to ? (y/n)" << endl;
                    cin >> prompt;
                    if (prompt == 'y')
                    {
                        for (int i = 6; i < 11; i++)
                        {
                            if (arr[i] == 0)
                            {
                                arr[i] = 1;
                                isSit = true;
                                break;
                            }
                        }
                        if (isSit == true)
                        {
                            isSit = false;
                            cout << "See you have a good journey" << endl;
                        }
                    }
                }
                else
                {
                    cout << "and also,there is no empty slot in economy sry." << endl;
                }
            }
        }
        else
        {
            cout << "error! try again." << endl;
        }

        for (int i = 0; i < 10; i++)
        {
            if (arr[i] == 0)
            {
                countEmpty++;
            }
        }
        if (!(countEmpty > 0))
        {
            cout << "Next flight leaves in 3 hours" << endl;
            stop = false;
            break;
        }
    }

    return 0;
}
