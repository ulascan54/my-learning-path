#include <iostream>
#include <stack>

using namespace std;

bool isGraterOrEqual(char op1, char op2)
{
    if (op1 == '*' || op1 == '/')
        return true;
    else if (op2 == '+' || op2 == '-')
        return true;
    else
        return false;
}

string infixToPosfix(string str)
{
    string posfix;
    stack<char> s;
    string digits = "0123456789";
    bool isdigit;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (str[i] == digits[j])
            {
                isdigit = true;
                break;
            }
        }
        if (isdigit)
        {
            do
            {
                posfix += str[i];
                i++;
                isdigit = false;
                for (int j = 0; j < 10; j++)
                {
                    if (str[i] == digits[j])
                    {
                        isdigit = true;
                        break;
                    }
                }
            } while (isdigit);
            i--;
            posfix += ' ';
        }
        else if (str[i] == '*' || str[i] == '/' || str[i] == '+' || str[i] == '-')
        {
            while (!s.empty() && s.top() != '(')
            {
                if (isGraterOrEqual(s.top(), str[i]))
                {
                    posfix += s.top();
                    posfix += ' ';
                    s.pop();
                }
                else
                    break;
            }
            s.push(str[i]);
        }
        else if (str[i] == '(')
            s.push(str[i]);
        else if (str[i] == ')')
        {
            while (!s.empty())
            {
                if (s.top() == '(')
                {
                    s.pop();
                    break;
                }
                posfix += s.top();
                posfix += ' ';
                s.pop();
            }
        }
    }
    while (!s.empty())
    {
        posfix += s.top();
        posfix += " ";
        s.pop();
    }
    return posfix;
}

int main(int argc, char const *argv[])
{
    cout << infixToPosfix("(3+4)*(242-84)+(8+2)/24");
    return 0;
}
