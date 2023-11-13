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
    friend ostream &operator<<(ostream &os, List &list);

private:
    Node *head;
};