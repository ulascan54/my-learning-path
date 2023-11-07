#include <iostream>
#include "ListP.h"

using namespace std;

struct Node
{
    int item;
    Node *next;
};
// if head is null the linked list is empty

int main()
{
    Node *head;
    head = new Node;
    head->next = new Node;
    head->next->item = 3;

    for (Node *cur = head; cur != NULL; cur = cur->next)
    {
        cout << cur->item << endl;
    }

    List<int> l;
    l.insert(1, 3);
    l.insert(2, 4);
    l.insert(3, 5);
    l.insert(4, 6);
    l.insert(5, 7);
    l.display();

    return 0;
}
