#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Link
{
public:
    Link(T data)
    {
        this->data = data;
        this->next = 0;
    }
    ~Link()
    {
        using namespace std;
        cout << this->data << " : silindi..." << endl;
    }
    T data;
    Link<T> *next;
};
