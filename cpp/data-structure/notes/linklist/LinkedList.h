#pragma once
#include "Link.h"
class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    void add(int number);
    void display();

private:
    Link *head;
};