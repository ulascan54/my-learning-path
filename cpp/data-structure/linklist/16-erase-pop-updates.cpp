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
    Node *findPrev(Node *pos)
    {
        Node *tmp = root;
        Node *stop = tail->next;
        while (tmp != stop && tmp->next != pos)
            tmp = tmp->next;
        return tmp;
    }

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
        erase(end());
    }

    void pop_front()
    {
        erase(begin());
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

    void erase(Node *pos)
    {
        if (isEmpty())
            return;
        Node *prev = root;
        if (pos == end() || pos == tail)
        {
            pos = tail;
            while (prev->next != pos)
                prev = prev->next;
            prev->next = pos->next;
            tail = prev;
        }
        else
        {
            while (prev->next != pos)
                prev = prev->next;
            prev->next = pos->next;
        }
        delete pos;
    }
};

int main()
{
    list l;
    cout << l.isEmpty() << endl;
    l.push_front(5);
    l.push_back(15);
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(25);
    l.display();

    cout << l.front() << endl;
    cout << l.back() << endl;
    cout << "****" << endl;
    l.display();
    l.erase(l.begin());
    l.display();
    l.erase(l.end());
    l.display();
    l.erase(l.begin());
    l.erase(l.begin());
    l.erase(l.begin());
    l.erase(l.begin());
    l.erase(l.begin());
    l.display();

    return 0;
}
