#include "Node.h"
#include <iostream>

Node::Node(int data)
{
    this->data = data;
    prev = next = 0;
}

Node::~Node()
{
    std::cout << "Node: " << this << " : SİLİNDİ!" << std::endl;
}