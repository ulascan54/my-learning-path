#include <iostream>
using namespace std;

class StackNode
{
    int data;
    StackNode *next;
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
};

int main()
{
    Stack s;
    cout << s.isEmpty() << endl;
    return 0;
}
