#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }
    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }
    void pop()
    {
        if (top != nullptr)
        {
            Node *ditem = top;
            top = top->next;
            delete ditem;
        }
    }
    bool isEmpty()
    {
        if (top != nullptr)
        {
            return false;
        }
        return true;
    }

    int getTop()
    {
        if (top != nullptr)
        {
            return top->data;
        }
        else
            return 0;
    }

    void display()
    {
        Node *cur = top;
        while (cur != nullptr)
        {
            cout << cur->data << endl;
            cur = cur->next;
        }
    }
};

string integerToString(int a)
{
    Stack s;
    while (a != 0)
    {
        s.push(a % 10);
        a /= 10;
    }
    string x;
    while (!s.isEmpty())
    {
        x += '0' + s.getTop();
        s.pop();
    }
    return x;
}

string integerToString(int a, int base)
{
    Stack s;
    string chars = "0123456789ABCDEF";
    while (a != 0)
    {
        s.push(a % base);
        a /= base;
    }
    string x;
    while (!s.isEmpty())
    {
        x += chars[s.getTop()];
        s.pop();
    }
    return x;
}

int main()
{
    cout << integerToString(123) << endl;
    cout << integerToString(8, 4) << endl;
}
