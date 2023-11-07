#pragma once
#include <iostream>
using namespace std;

template <class T>
class List
{
public:
    List();                  // default constructor
    List(const List &aList); // copy constructor
    ~List();                 // destructor

    // list operatiıns:
    bool isEmpty() const;                        // check if the list is empty
    int getLength() const;                       // get the length of the list
    bool insert(int index, const T &newEntry);   // insert an entry at a given position
    bool remove(int index);                      // remove the entry at a given position
    bool retrieve(int index, T &dataItem) const; // retrieve the entry at a given position
    void display() const;                        // display the content of the list
private:
    struct ListNode // a node on the list
    {
        T item;         // a data item on the list
        ListNode *next; // pointer to next node
    };
    int size;       // number of items in list
    ListNode *head; // pointer to linked list of items

    ListNode *find(int index) const; // locate a specified node in a linked list
};