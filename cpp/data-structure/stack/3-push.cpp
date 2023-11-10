#include <iostream>
using namespace std;

class StackNode
{
    int data;
    StackNode *next;

public:
    StackNode(const int &data = 0, StackNode *next = NULL) : data(data), next(next){};
};

class Stack
{
    StackNode *root;

public:
    Stack() : root(NULL){};
    StackNode *begin() const
    {
        return root;
    };
    StackNode *end() const
    {
        return NULL;
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
    }
};

int main()
{
    Stack s;
    cout << s.isEmpty() << endl;
    s.push(10);
    cout << s.isEmpty() << endl;
    return 0;
}
