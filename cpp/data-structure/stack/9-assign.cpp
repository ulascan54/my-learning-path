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
    void makeEmpty()
    {
        while (!isEmpty())
            pop();
    }

public:
    Stack() : root(NULL), length(0){};
    StackNode *begin() const
    {
        return root;
    };
    Stack &operator=(const Stack &rhs)
    {
        return assign(rhs);
    }

    Stack &assign(const Stack &rhs)
    {
        makeEmpty();
        if (!rhs.isEmpty())
        {
            root = new StackNode(rhs.top());
            StackNode *rhsTmp = rhs.begin()->next;
            StackNode *lhsTmp = begin();
            while (rhsTmp != rhs.end())
            {
                lhsTmp->next = new StackNode(rhsTmp->data);
                lhsTmp = lhsTmp->next;
                rhsTmp = rhsTmp->next;
            }
        }
        return *this;
    }

    StackNode *end() const
    {
        return NULL;
    }
    ~Stack()
    {
        makeEmpty();
    }

    int
    size()
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
    int top() const
    {
        if (isEmpty())
        {
            throw runtime_error("error");
        }

        return begin()->data;
    }
};

int main()
{
    Stack s;
    cout << s.isEmpty() << endl;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.isEmpty() << endl;
    s.makeEmpty();
    cout << s.isEmpty() << endl;
    return 0;
}
