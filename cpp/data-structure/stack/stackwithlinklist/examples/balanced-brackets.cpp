#include <iostream>
#include <stack>

using namespace std;

bool checkblance(string str)
{
    stack<char> s;
    int i = 0;
    while (i != str.length())
    {
        if (str[i] == '{' || str[i] == '(' || str[i] == '[')
            s.push(str[i]);
        if (str[i] == '}' || str[i] == ')' || str[i] == ']')
        {
            if (s.empty())
                return false;
            if (str[i] == '}' && s.top() == '{' ||
                str[i] == ']' && s.top() == '[' ||
                str[i] == ')' && s.top() == '(')
                s.pop();
            else
                return false;
        }
        i++;
    }
    return s.empty();
}

int main(int argc, char const *argv[])
{
    cout << checkblance("(a*b/c+d){[][[[[[[[[]]=?_}]]]]]]}");
    return 0;
}
