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
    int len;
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
        len = 0;
        root = new Node();
        tail = root;
        tail->next = new Node();
    }
    ~list()
    {
        clear();
        delete tail->next;
        delete tail;
    }
    Node *begin() const { return root->next; }
    Node *end() const { return tail->next; }
    // Node *end() const { return NULL; }
    // bool isEmpty() const { return root == NULL; }
    bool isEmpty() const { return begin() == end(); }
    int size() const
    {
        // int count = 0;
        // Node *tmp = begin();
        // while (tmp != end())
        // {
        //     count++;
        //     tmp = tmp->next;
        // }
        // return count;
        return len;
    }
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
    Node *find(const int &val) const
    {
        Node *tmp = begin();
        Node *stop = end();
        while (tmp != stop && tmp->data != val)
        {
            tmp = tmp->next;
        }
        return tmp;
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
            Node *tmp = findPrev(pos);
            if (tmp == end())
                return;
            tmp->next = new Node(value, tmp->next);
        }
        len++;
    }
    void insert(Node *pos, const int &value, int n)
    {
        for (int i = 0; i < n; i++)
            insert(pos, value);
    }
    void insert(Node *pos, Node *first, Node *last)
    {
        while (first != last)
        {
            insert(pos, first->data);
            first = first->next;
        }
    }
    void clear()
    {
        erase(begin(), end());
    }
    void erase(Node *pos)
    {
        if (isEmpty())
            return;
        Node *prev = root;
        if (pos == end() || pos == tail)
        {
            pos = tail;
            prev = findPrev(pos);
            prev->next = pos->next;
            tail = prev;
        }
        else
        {
            prev = findPrev(pos);
            if (pos == end())
                return;
            prev->next = pos->next;
        }
        delete pos;
        pos = NULL;
        len--;
    }
    void erase(Node *first, Node *last)
    {
        Node *tmp;
        while (first != last)
        {
            tmp = first;
            first = first->next;
            erase(tmp);
        }
    }
    list &operator=(const list &rhs)
    {
        return assign(rhs);
    }
    list &assign(const list &rhs)
    {
        clear();
        Node *tmp = rhs.begin();
        while (tmp != rhs.end())
        {
            push_back(tmp->data);
            tmp = tmp->next;
        }
        return *this;
    }
};

int main()
{
    Node *first;
    Node *last;
    {
        list l;
        l.push_back(10);
        l.push_back(20);
        l.push_back(30);
        first = l.begin();
        last = l.end();
    }
    while (first != last)
    {
        cout << first->data << " ";
        first = first->next;
    }

    return 0;
}
