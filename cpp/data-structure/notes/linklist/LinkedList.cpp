#include "LinkedList.h"
#include <iostream>
#include <iomanip>
using namespace std;

LinkedList::LinkedList()
{
    this->head = 0;
}
LinkedList::~LinkedList()
{
    Link *iterator = head;
    while (iterator != 0)
    {
        Link *delIterator = iterator;
        iterator = iterator->next;

        delete delIterator;
    }
}
void LinkedList::add(int number)
{
    Link *generateLink = new Link(number);
    if (head == 0)
    {
        head = generateLink;
        return;
    }
    Link *iterator = head;
    while (iterator->next != 0)
    {
        iterator = iterator->next;
    }
    iterator->next = generateLink;
}
void LinkedList::display()
{
    cout << setw(10) << "adress" << setw(10) << "veri" << setw(15) << "sonraki" << endl;
    cout << setw(10) << "------" << setw(10) << "----" << setw(15) << "-------" << endl;

    Link *iterator = head;
    while (iterator != 0)
    {
        cout << setw(10) << iterator << setw(10) << iterator->data << setw(15) << iterator->next << endl;
        iterator = iterator->next;
    }
    cout << endl;
}