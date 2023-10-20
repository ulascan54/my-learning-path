#include <iostream>

using namespace std;

int main()
{
    string text;
    cout << "Enter text to check is it palidrome?" << endl;
    cin >> text;

    int textSize = text.length() - 1;
    string output;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != text[textSize])
        {
            output = "this is not palidrome";
            break;
        }
        textSize--;
    }
    if (output != "this is not palidrome")
    {
        cout << "this is palidrome" << endl;
    }
    else
    {
        cout << output << endl;
    }
    return 0;
}
