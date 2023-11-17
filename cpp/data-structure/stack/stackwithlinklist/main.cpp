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
    int getTop()
    {
        if (top != nullptr)
        {
            return top->data;
        }
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

int main(int argc, char const *argv[])
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    cout << "----" << endl;
    s.pop();
    s.pop();
    s.pop();
    s.display();
    cout << "----" << endl;

    s.push(223);
    s.push(234);
    s.pop();
    s.display();
    return 0;
}
