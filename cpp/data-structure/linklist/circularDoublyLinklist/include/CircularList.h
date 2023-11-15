#pragma once
#include "Node.h"
#include <iostream>
#include <iomanip>
using namespace std;

class CircularList
{
    Node *head;
    int length;

public:
    CircularList();
    ~CircularList();
    void addNewItem(int data);
    void addNewItem(int data, int index);
    void deleteItem();
    void deleteItem(int index);
    Node *getNodeByIndex(int index);

    friend ostream &operator<<(ostream &os, CircularList &list);
};
