#pragma once
#include <iostream>
using namespace std;
class Node
{
public:
    Node(int data);
    ~Node();
    int data;
    Node *prev;
    Node *next;
};