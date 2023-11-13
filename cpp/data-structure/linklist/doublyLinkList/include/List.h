#pragma once
#include <exception>
#include <iostream>
#include "Node.h"

class List
{
public:
    List();
    ~List();
    void addNewElement(int data);
    void deleteElement();
    int getHeadValue();
    Node *getNode(int index);
    void deleteElement(int index);
    void addToFront(int index, int data);
    friend ostream &operator<<(ostream &os, List &list);

private:
    Node *head;
};