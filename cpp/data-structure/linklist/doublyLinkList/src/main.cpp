#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    List *l = new List();
    l->addNewElement(2);
    l->addNewElement(11);
    l->addNewElement(22);
    cout << *l << endl;
    l->addNewElement(32);
    cout << *l << endl;
    l->addNewElement(42);
    cout << *l << endl;
    l->addNewElement(52);
    cout << *l << endl;
    l->deleteElement();
    cout << *l << endl;
    l->deleteElement();
    l->deleteElement();
    l->deleteElement();
    l->deleteElement();
    cout << *l << endl;

    l->deleteElement();
    l->deleteElement();
    l->deleteElement();
    cout << *l << endl;
    l->addNewElement(52);
    cout << *l << endl;
    cout << l->getHeadValue() << endl;
    return 0;
}
