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
    void print_middle()
    {
        Node *fast = begin();
        Node *slow = begin();
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        cout << slow->data << endl;
    }
    int find_element_count(int key)
    {
        Node *cur = begin();
        int count = 0;
        while (cur != 0)
        {
            if (cur->data == key)
                count++;
            cur = cur->next;
        }
        return count;
    }
    int sum_of_nodes(Node *head)
    {
        if (head == NULL)
        {
            return 0;
        }
        return head->data + sum_of_nodes(head->next);
    }
    void push_front(int data)
    {
        Node *newElement = new Node(data);
        newElement->next = root;
        root = newElement;
    }
};

int main()
{
    list l;
    l.push_front(8);

    l.display();

    return 0;
}
