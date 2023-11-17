#include "CircularList.h"

int main()
{

    CircularList l;
    l.addNewItem(10);
    l.addNewItem(20);
    l.addNewItem(30);
    l.addNewItem(40);
    l.addNewItem(50);
    cout << l << endl;
    l.deleteItem();
    cout << l << endl;
    l.deleteItem(1);
    cout << l << endl;

    return 0;
}
