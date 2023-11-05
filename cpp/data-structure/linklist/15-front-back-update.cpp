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
    Node *tail;

public:
    list()
    {
        root = new Node();
        tail = root;
        tail->next = new Node();
    }
    Node *begin() const { return root->next; }
    Node *end() const { return tail->next; }
    // Node *end() const { return NULL; }
    // bool isEmpty() const { return root == NULL; }
    bool isEmpty() const { return begin() == end(); }
    void push_back(const int &newElement)
    {
        insert(end(), newElement);
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
    void push_front(const int &data)
    {
        insert(begin(), data);
    }
    int front() const
    {
        if (isEmpty())
            throw runtime_error("Error: list is empty");
        return begin()->data;
    }
    int back() const
    {
        if (isEmpty())
            throw runtime_error("Error: list is empty");
        return tail->data;
    }
    void reverse()
    {
        Node *tmp = begin();
        Node *prev = NULL;
        Node *next = NULL;

        while (tmp != NULL)
        {
            next = tmp->next;
            tmp->next = prev;
            prev = tmp;
            tmp = next;
        }
        root = prev;
    }
    void pop_back()
    {
        if (isEmpty())
            return;
        if (begin()->next == end())
        {
            delete root;
            root = NULL;
            return;
        }
        Node *tmp = begin();
        while (tmp->next->next != end())
            tmp = tmp->next;
        delete tmp->next;
        tmp->next = NULL;
    }

    void pop_front()
    {
        if (isEmpty())
            return;
        Node *ditem = root;
        root = root->next;
        delete ditem;
        ditem = NULL;
    }
    void insert(Node *pos, const int &value)
    {
        if (pos == end())
        {
            tail->next = new Node(value, end());
            tail = tail->next;
        }
        else
        {
            Node *tmp = root;
            while (tmp->next != pos)
                tmp = tmp->next;
            tmp->next = new Node(value, tmp->next);
        }
    }
};

int main()
{
    list l;
    cout << l.isEmpty() << endl;
    l.push_front(5);
    l.push_back(15);
    l.push_front(25);
    l.display();
    cout << l.front() << endl;
    cout << l.back() << endl;

    return 0;
}
