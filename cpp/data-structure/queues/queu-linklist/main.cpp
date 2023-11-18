#include <iostream>

class Node
{
public:
    int val;
    Node *next;
    Node()
    {
        next = nullptr;
    };
    Node(int data)
    {
        val = data;
        next = nullptr;
    }
};

class Queues
{
public:
    Queues()
    {
        tail = front = nullptr;
    };
    ~Queues()
    {
        while (front != nullptr)
        {
            while (front != nullptr)
            {
                Node *ditem = front;
                front->next = front;
                delete ditem;
            }
        }
    };
    Node *getGratestNode()
    {
        if (front == 0)
            return 0;
        Node *tmp = front;
        Node *prev = nullptr;
        int gratest = tmp->val;
        while (tmp->next != nullptr)
        {
            if (tmp->next->val > gratest)
            {
                gratest = tmp->next->val;
                prev = tmp;
            }
            tmp = tmp->next;
        }
        return prev;
    }

    int getGratest()
    {
        Node *prev = getGratestNode();
        if (prev)
            return prev->next->val;
        if (front != nullptr)
            return front->val;
    }

    void deleteGratestNode()
    {
        Node *prev = getGratestNode();
        if (prev)
        {
            if (prev->next == tail)
                tail = prev;
            Node *ditem = prev->next;
            prev->next = ditem->next;
            delete ditem;
        }
        else
        {
            if (front == 0)
                return;
            Node *ditem = front;
            front = front->next;
            delete ditem;
        }
    }
    void enqueu(int data)
    {
        if (front == nullptr)
        {
            front = new Node(data);
            tail = front;
        }
        else
        {
            Node *nitem = new Node(data);
            tail->next = nitem;
            tail = nitem;
        }
    };
    void dequeu()
    {
        if (front != nullptr)
        {
            Node *tmp = front->next;
            delete front;
            front = tmp;
            if (front == nullptr)
                tail = 0;
        }
    };
    bool empty()
    {
        if (front = nullptr)
            return true;
        return false;
    };
    int getFront()
    {
        if (front != nullptr)
            return front->val;
        else
            return -1;
    };

private:
    Node *front;
    Node *tail;
};

int main(int argc, char const *argv[])
{
    return 0;
}
