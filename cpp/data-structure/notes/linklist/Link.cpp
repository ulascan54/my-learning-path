#include "./Link.h"
#include <iostream>
using namespace std;
Link::Link(int data)
{
    this->data = data;
    this->next = 0;
}

Link::~Link()
{
    cout << this->data << " : silindi..." << endl;
}