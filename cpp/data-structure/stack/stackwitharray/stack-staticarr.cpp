#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int MAX = 10;

class Stack
{
private:
    int top;
    int data[MAX];

public:
    Stack();
    void push(int value);
    void pop();
    int getTop();
    bool isEmpty();
    ~Stack();
    friend ostream &operator<<(ostream &os, Stack &stack);
};

Stack::Stack()
{
    top = -1;
}
void Stack::push(int value)
{
    if (top < MAX - 1)
    {
        top++;
        data[top] = value;
    }
}

void Stack::pop()
{
    if (top != -1)
    {
        top--;
    }
}

int Stack::getTop()
{
    if (top != -1)
    {
        return data[top];
    }
}

bool Stack::isEmpty()
{
    if (top == -1)
        return true;
    return false;
};

Stack::~Stack()
{
    cout << "yok edildi" << endl;
}
ostream &operator<<(ostream &os, Stack &stack)
{
    os << "---->";
    for (int i = stack.top; i >= 0; i--)
    {
        os << stack.data[i] << endl
           << "     ";
    }
    os << endl;
    return os;
}

int main()
{
    Stack s;
    s.push(11);
    s.push(21);
    s.push(31);
    s.push(41);
    s.push(51);

    cout << s << endl;

    return 0;
}
