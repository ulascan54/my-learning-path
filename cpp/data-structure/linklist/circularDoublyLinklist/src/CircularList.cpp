#include "CircularList.h"

CircularList::CircularList()
{
    head = nullptr;
    length = 0;
}

Node *CircularList::getNodeByIndex(int index)
{
    if (index < 0 || index > length)
        return 0;
    else
    {
        Node *tmp = head;
        for (int i = 0; i < index; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
}

void CircularList::addNewItem(int data, int index)
{
    Node *tmp = getNodeByIndex(index);
    if (tmp)
    {
        Node *prev = tmp->prev;
        Node *item = new Node(data);
        if (tmp == head)
            head = item;
        prev->next = item;
        item->next = tmp;
        item->prev = prev;
        tmp->prev = item;
        length++;
    }
}

void CircularList::addNewItem(int data)
{
    Node *newElement = new Node(data);
    if (head == 0)
    {
        head = newElement;
        head->next = head;
        head->prev = head;
    }
    else
    {
        Node *tmp = head;
        while (tmp->next != head)
        {
            tmp = tmp->next;
        }
        tmp->next = newElement;
        newElement->prev = tmp;
        newElement->next = head;
        head->prev = newElement;
    }
    length++;
}

CircularList::~CircularList()
{
    cout << "helo" << endl;
}

void CircularList::deleteItem(int index)
{
    Node *tmp = getNodeByIndex(index);
    if (tmp)
    {
        Node *prev = tmp->prev;
        Node *next = tmp->next;
        prev->next = next;
        next->prev = prev;

        if (head->prev = head)
            head = 0;

        if (tmp == head)
            head = next;

        delete tmp;
        length--;
    }
    else
    {
        return;
    }
};

void CircularList::deleteItem()
{
    if (head == 0)
    {
        return;
    }
    if (head->next == head)
    {
        delete head;
        head = 0;
    }
    else
    {
        Node *tmp = getNodeByIndex(length - 2);
        delete tmp->next;
        tmp->next = head;
        head->prev = tmp;
    }
    length--;
}

ostream &operator<<(ostream &os, CircularList &list)
{
    os << setw(15) << "adress" << setw(15) << "veri" << setw(15) << "önceki" << setw(15) << "sonraki" << endl;
    Node *tmp = list.head;
    for (int i = 0; i < list.length; i++)
    {
        os << setw(15) << tmp << setw(15) << tmp->data << setw(15) << tmp->prev << setw(15) << tmp->next << endl;
        tmp = tmp->next;
    }
    os << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    return os;
}
