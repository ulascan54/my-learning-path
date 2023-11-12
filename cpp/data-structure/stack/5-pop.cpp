#include <iostream>
using namespace std;

class StackNode
{
public:
    int data;
    StackNode *next;
    StackNode(const int &data = 0, StackNode *next = NULL) : data(data), next(next){};
};

class Stack
{
    StackNode *root;
    int length;

public:
    Stack() : root(NULL), length(0){};
    StackNode *begin() const
    {
        return root;
    };
    StackNode *end() const
    {
        return NULL;
    }

    int size()
    {
        return length;
    }

    bool isEmpty() const
    {
        // return root == NULL;
        return begin() == end();
    }
    void push(const int &value)
    {
        StackNode *tmp = new StackNode(value, root);
        root = tmp;
        length++;
    }
    void display() const
    {
        if (isEmpty())
            return;
        StackNode *tmp = begin();
        while (tmp != end())
        {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
    void pop()
    {
        if (isEmpty())
            return;
        StackNode *tmp = root;
        root = root->next;
        delete tmp;
        length--;
    }
};

int main()
{
    Stack s;
    cout << s.isEmpty() << endl;
    cout << s.size() << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.size() << endl;

    cout << s.isEmpty() << endl;
    s.display();
    s.pop();
    cout << s.size() << endl;

    s.display();
    return 0;
}
