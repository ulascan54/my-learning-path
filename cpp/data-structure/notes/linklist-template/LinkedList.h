#pragma once
#include "Link.h"
#include <iomanip>
using namespace std;
template <typename T>
class LinkedList
{
public:
    LinkedList()
    {
        head = 0;
    }
    ~LinkedList()
    {
        Link<T> *iterator = head;
        while (iterator != 0)
        {
            Link<T> *delIterator = iterator;
            iterator = iterator->next;

            delete delIterator;
        }
    }
    void add(T number)
    {
        Link<T> *generateLink = new Link<T>(number);
        if (head == 0)
        {
            head = generateLink;
            return;
        }
        Link<T> *iterator = getLastElement();
        iterator->next = generateLink;
    }
    Link<T> *getLastElement()
    {
        Link<T> *iterator = head;
        while (iterator->next != 0)
            iterator = iterator->next;
        return iterator;
    }
    void display()
    {
        cout << setw(10) << "adress" << setw(10) << "veri" << setw(15) << "sonraki" << endl;
        cout << setw(10) << "------" << setw(10) << "----" << setw(15) << "-------" << endl;

        Link<T> *iterator = head;
        while (iterator != 0)
        {
            cout << setw(10) << iterator << setw(10) << iterator->data << setw(15) << iterator->next << endl;
            iterator = iterator->next;
        }
        cout << endl;
    }
    void eraese()
    {
        if (head == 0)
            return;
        if (head->next == 0)
        {
            delete head;
            head = 0;
            return;
        }
        Link<T> *iterator = getElementBeforeLast();
        delete iterator->next;
        iterator->next = 0;
    }
    Link<T> *getElementBeforeLast()
    {
        Link<T> *iterator = head;
        while (iterator->next->next != 0)
            iterator = iterator->next;
        return iterator;
    }

private:
    Link<T> *head;
};