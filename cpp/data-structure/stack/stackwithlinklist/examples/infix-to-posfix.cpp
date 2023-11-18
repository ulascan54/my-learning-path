#include <iostream>
#include <stack>
#include <string>

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

double posfixCalc(string s)
{
    stack<double> stack;
    double result;
    for (int i = 0; i < s.length(); i++)
    {
        if ('0' <= s[i] && s[i] <= '9')
        {
            string number;
            while (s[i] != ' ' && i < s.length())
            {
                number += s[i];
                i++;
            }
            stack.push(stod(number));
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            if (s[i] == '+')
            {
                double operand2 = stack.top();
                stack.pop();
                double operand1 = stack.top();
                stack.pop();
                result = operand1 + operand2;
                stack.push(result);
            }
            else if (s[i] == '-')
            {
                double operand2 = stack.top();
                stack.pop();
                double operand1 = stack.top();
                stack.pop();
                result = operand1 - operand2;
                stack.push(result);
            }
            else if (s[i] == '*')
            {
                double operand2 = stack.top();
                stack.pop();
                double operand1 = stack.top();
                stack.pop();
                result = operand1 * operand2;
                stack.push(result);
            }
            else if (s[i] == '/')
            {
                double operand2 = stack.top();
                stack.pop();
                double operand1 = stack.top();
                stack.pop();
                if (operand2 != 0)
                {
                    result = operand1 / operand2;
                    stack.push(result);
                }
                else
                {
                    cerr << "Error: Division by zero." << endl;
                    exit(1);
                }
            }
        }
    }
    return stack.top();
}

int main(int argc, char const *argv[])
{
    cout << infixToPosfix("(3+4)*(242-84)+(8+2)/24") << endl;
    cout << posfixCalc(infixToPosfix("(3+4)*(242-84)+(8+2)/24"));
    return 0;
}
