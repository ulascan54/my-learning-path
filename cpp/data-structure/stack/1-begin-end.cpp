#include <istream>

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
    StackNode *begin()
    {
        return root;
    };
    StackNode *end()
    {
        return NULL;
    }
};

int main()
{
    return 0;
}
