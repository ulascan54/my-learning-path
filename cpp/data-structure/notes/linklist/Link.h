#pragma once

class Link
{
public:
    Link(int data);
    ~Link();
    int data;
    Link *next;
};
