#pragma once
class Node
{

public:
    Node(int data);
    ~Node();

    int data;
    Node *prev;
    Node *next;
};
