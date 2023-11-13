#include "Node.h"

Node::Node(int data)
{
    this->data = data;
    prev = next = nullptr;
};

Node::~Node()
{
    cout << this << " düğümü silindi!!!" << endl;
}