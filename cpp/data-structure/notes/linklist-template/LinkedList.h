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
        Link<T> *iterator = head;
        while (iterator->next != 0)
        {
            iterator = iterator->next;
        }
        iterator->next = generateLink;
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

private:
    Link<T> *head;
};