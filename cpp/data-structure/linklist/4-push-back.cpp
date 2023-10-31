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
    void push_back(const int &newElement)
    {
        if (isEmpty())
        {
            root = new Node(newElement);
            return;
        }
        Node *tmp = begin();
        while (tmp->next != end())
            tmp = tmp->next;
        tmp->next = new Node(newElement);
    }
    void display()
    {
        if (isEmpty())
            return;
        Node *tmp = begin();
        while (tmp != end())
        {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
};

int main()
{
    list l;
    l.push_back(5);
    l.push_back(6);
    l.display();
    cout << l.isEmpty();

    return 0;
}
