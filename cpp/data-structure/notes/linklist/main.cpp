#include <iostream>
#include "Link.cpp"
#include "LinkedList.cpp"

int main()
{
    LinkedList *list = new LinkedList();
    list->add(20);
    list->add(30);
    list->add(40);
    list->add(350);
    list->add(340);
    list->add(420);
    list->display();
    delete list;
    return 0;
}
