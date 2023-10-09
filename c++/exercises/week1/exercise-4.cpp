#include <iostream>
using namespace std;

int main()
{
    int pankes[7];
    string names[7];

    for (int i = 0; i < 7; i++)
    {
        cout << (i + 1) << ". Person:";
        cin >> names[i] >> pankes[i];
    }

    int max = 0;
    int min = 0;
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 0; i < 7; i++)
    {
        if (pankes[i] > max)
        {
            max = pankes[i];
            maxIndex = i;
        }
        if (pankes[i] < min)
        {
            min = pankes[i];
            minIndex = i;
        }
    }
    cout << "best eaten person:" << endl;
    cout << names[maxIndex] << pankes[maxIndex] << endl;

    cout << "worst eaten person:" << endl;
    cout << names[minIndex] << pankes[minIndex] << endl;
    string name1, name2;
    cout << "dou wantto compare people just write the names" << endl;
    cin >> name1 >> name2;
    int nameIndex = 0;

    for (int i = 0; i < 7; i++)
    {
        if (names[i] == name1)
        {
            nameIndex = i;
            break;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (names[i] == name2)
        {
            if (pankes[nameIndex] > pankes[i])
            {
                cout << name1 << " more eaten than" << name2 << endl;
            }
            else
            {
                cout << name2 << " more eaten than" << name1 << endl;
            }
            break;
        }
    }

    int x;
    cout << "write the count of pankes to find the people" << endl;
    cin >> x;
    for (int i = 0; i < 7; i++)
    {
        if (pankes[i] == x)
        {
            cout << "I found " << names[i] << endl;
            break;
        }
        else
        {
            cout << "there is no such number" << endl;
            break;
        }
    }
    int arr[7];
    string narr[7];

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (pankes[i] < pankes[j])
            {
                arr[i] = pankes[i];
                narr[i] = names[i];
            }
            else
            {
                arr[i] = pankes[j];
                narr[i] = names[j];
            }
        }
    }
    cout << "sorted list:" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << "," << narr[i] << endl;
    }
}
