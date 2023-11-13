#include <iostream>
#include "List.h"
#include <stack>
#include <string>
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

    cout << l->getNode(2)->data << endl;
    l->deleteElement(3);
    cout << *l << endl;
    l->addToFront(0, 99);

    cout << *l << endl;

    return 0;
}
