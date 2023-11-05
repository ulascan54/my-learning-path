#include <iostream>
using namespace std;

template <class T>
class Node
{
public:
    Node(const T &data = T(), Node<T> *next = NULL) : data(data), next(next){};
    T data;
    Node<T> *next;
};

template <class T>
class list
{
    int len;
    Node<T> *root;
    Node<T> *tail;
    Node<T> *findPrev(Node<T> *pos)
    {
        Node<T> *tmp = root;
        Node<T> *stop = tail->next;
        while (tmp != stop && tmp->next != pos)
            tmp = tmp->next;
        return tmp;
    }

public:
    list()
    {
        len = 0;
        root = new Node<T>();
        tail = root;
        tail->next = new Node<T>();
    }
    list(int n, const T &value = 0)
    {
        len = 0;
        root = new Node<T>();
        tail = root;
        tail->next = new Node<T>();
        insert(end(), value, n);
    }
    list(Node<T> *first, Node<T> *last)
    {
        len = 0;
        root = new Node<T>();
        tail = root;
        tail->next = new Node<T>();
        while (first != last)
        {
            insert(end(), first->data);
            first = first->next;
        }
    }
    ~list()
    {
        clear();
        delete tail->next;
        delete tail;
    }
    Node<T> *begin() const { return root->next; }
    Node<T> *end() const { return tail->next; }
    // Node<T> *end() const { return NULL; }
    // bool isEmpty() const { return root == NULL; }
    bool isEmpty() const { return begin() == end(); }
    int size() const
    {
        // int count = 0;
        // Node<T> *tmp = begin();
        // while (tmp != end())
        // {
        //     count++;
        //     tmp = tmp->next;
        // }
        // return count;
        return len;
    }
    void push_back(const T &newElement)
    {
        insert(end(), newElement);
    }
    void display()
    {
        if (isEmpty())
            return;
        Node<T> *tmp = begin();
        while (tmp != end())
        {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
    void print_middle()
    {
        Node<T> *fast = begin();
        Node<T> *slow = begin();
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        cout << slow->data << endl;
    }
    int find_element_count(int key)
    {
        Node<T> *cur = begin();
        int count = 0;
        while (cur != 0)
        {
            if (cur->data == key)
                count++;
            cur = cur->next;
        }
        return count;
    }
    Node<T> *find(const T &val) const
    {
        return find(begin(), val);
    }
    Node<T> *find(Node<T> *pos, const T &val) const
    {
        Node<T> *tmp = pos;
        Node<T> *stop = end();
        while (tmp != stop && tmp->data != val)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
    int sum_of_nodes(Node<T> *head)
    {
        if (head == NULL)
        {
            return 0;
        }
        return head->data + sum_of_nodes(head->next);
    }
    void push_front(const T &data)
    {
        insert(begin(), data);
    }
    T front() const
    {
        if (isEmpty())
            throw runtime_error("Error: list is empty");
        return begin()->data;
    }
    T back() const
    {
        if (isEmpty())
            throw runtime_error("Error: list is empty");
        return tail->data;
    }
    void reverse()
    {
        Node<T> *tmp = begin();
        Node<T> *prev = NULL;
        Node<T> *next = NULL;

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
    void insert(Node<T> *pos, const T &value)
    {
        if (pos == end())
        {
            tail->next = new Node<T>(value, end());
            tail = tail->next;
        }
        else
        {
            Node<T> *tmp = findPrev(pos);
            if (tmp == end())
                return;
            tmp->next = new Node<T>(value, tmp->next);
        }
        len++;
    }
    void insert(Node<T> *pos, const T &value, int n)
    {
        for (int i = 0; i < n; i++)
            insert(pos, value);
    }
    void insert(Node<T> *pos, Node<T> *first, Node<T> *last)
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
    void erase(Node<T> *pos)
    {
        if (isEmpty())
            return;
        Node<T> *prev = root;
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
    void erase(Node<T> *first, Node<T> *last)
    {
        Node<T> *tmp;
        while (first != last)
        {
            tmp = first;
            first = first->next;
            erase(tmp);
        }
    }
    list<T> &operator=(const list<T> &rhs)
    {
        return assign(rhs);
    }
    list<T> &assign(const list<T> &rhs)
    {
        clear();
        Node<T> *tmp = rhs.begin();
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
    list<int> l;
    cout << l.isEmpty() << endl;
    l.display();
    list<char> l2(5, 'A');
    cout << l2.isEmpty() << endl;
    l2.display();
    return 0;
}
