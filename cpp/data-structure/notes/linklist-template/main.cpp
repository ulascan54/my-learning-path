#include <iostream>
#include <string>
#include "LinkedList.h"

int main()
{
    LinkedList<int> *list = new LinkedList<int>();
    list->eraese();

    list->add(20);
    list->add(30);
    list->add(40);
    list->add(350);
    list->add(340);
    list->add(420);
    list->display();
    list->eraese();
    list->eraese();
    list->eraese();
    list->display();

    delete list;

    LinkedList<string> *list2 = new LinkedList<string>();
    list2->add("123");
    list2->add("123");
    list2->add("123");
    list2->add("123");
    list2->add("123");
    list2->add("123");
    list2->display();
    delete list2;

    return 0;
}
