#include <iostream>
using namespace std;

class Node
{
public:
    Node(const int &data = 0, Node *next = NULL) : data(data), next(next){};
    int data;
    Node *next;
};

class list
{
    Node *root;

public:
    list() : root(NULL) {}
    Node *begin() const { return root; }
    Node *end() const { return NULL; }
    // bool isEmpty() const { return root == NULL; }
    bool isEmpty() const { return begin() == end(); }
};

int main()
{
    list l;
    cout << l.isEmpty();
    return 0;
}
