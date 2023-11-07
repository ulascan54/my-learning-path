#include "ListP.h"

template <class T>
List<T>::List()
{
    size = 0;
    head = new ListNode;
    head->next = NULL;
}

template <class T>
List<T>::List(const List &aList)
{
    if (aList.head == NULL)
        head = NULL; // original list is empty
    else
    {
        // copy first node
        head = new ListNode;
        head->item = aList.head->item;
        // copy rest of list
        ListNode *newPtr = head; // new list pointer

        for (ListNode *origPtr = aList.head->next; origPtr != NULL; origPtr = origPtr->next)
        {
            newPtr->next = new ListNode;
            newPtr = newPtr->next;
            newPtr->item = origPtr->item;
        }
        newPtr->next = NULL;
    }
    // end copy constructor
}

template <class T>
List<T>::~List()
{
    while (!isEmpty())
        remove(1);
}

template <class T>
bool List<T>::isEmpty() const
{
    return size == 0;
}

template <class T>
int List<T>::getLength() const
{
    return size;
}

template <class T>
List<T>::ListNode *List<T>::find(int index) const
{
    // Locates a specified node in a linked list.
    // Precondition: index is the number of the
    // desired node.
    // Postcondition: Returns a pointer to the
    // desired node. If index < 1 or index > the
    // number of nodes in the list, returns NULL.
    if ((index < 1) || (index > getLength()))
        return NULL;

    else // count from the beginning of the list.
    {
        ListNode *cur = head;
        for (int skip = 1; skip < index; ++skip)
            cur = cur->next;
        return cur;
    }
} // end find

template <class T>
bool List<T>::retrieve(int index, T &dataItem) const
{
    // Retrieves the data item at position index of a linked list.
    // Precondition: index indicates the position of the
    // item to be retrieved.
    // Postcondition: If 1 <= index <= getLength(),
    // dataItem is the value of the desired item and
    // the function returns true; otherwise the function
    // returns false. List is unchanged.
    if ((index < 1) || (index > getLength()))
        return false;

    // get pointer to node, then data in node
    ListNode *cur = find(index);
    dataItem = cur->item;

    return true;
} // end retrieve

template <class T>
bool List<T>::insert(int index, const T &newItem)
{
    // Inserts an item into the list at position index.
    // Precondition: index indicates the position at which
    // the item should be inserted in the list.
    // Postcondition: If 1 <= index <= getLength() + 1 and the
    // insertion is successful, newItem is at position index
    // in the list, and other items are renumbered accordingly,
    // and the function returns true; otherwise the function
    // returns false and the list is unchanged.
    if ((index < 1) || (index > getLength() + 1))
        return false;

    ListNode *newPtr = new ListNode;
    size++;
    newPtr->item = newItem;

    if (index == 1)
    {
        // insert new node at beginning of list
        newPtr->next = head;
        head = newPtr;
    }
    else
    {
        ListNode *prev = find(index - 1);
        // insert new node after node
        // to which prev points
        newPtr->next = prev->next;
        prev->next = newPtr;
    } // end if
    return true;
} // end insert

template <class T>
bool List<T>::remove(int index)
{
    // Removes the item from position index of a linked list.
    // Precondition: index indicates where the deletion
    // should occur.
    // Postcondition: If 1 <= index <= getLength() and the
    // deletion is successful, the item at position index
    // in the list is removed, other items are renumbered
    // accordingly, and the function returns true;
    // otherwise the function returns false and the list
    // is unchanged.
    ListNode *cur;

    if ((index < 1) || (index > getLength()))
        return false;

    --size;
    if (index == 1)
    {
        // delete the first node from the list
        cur = head; // save pointer to node
        head = head->next;
    }
    else
    {
        ListNode *prev = find(index - 1);
        // delete the node after the node to which prev points
        cur = prev->next; // save pointer to node
        prev->next = cur->next;
    } // end if

    cur->next = NULL;
    delete cur;
    cur = NULL;

    return true;
} // end remove

template <class T>
void List<T>::display() const
{
    ListNode *cur = head;
    while (cur != NULL)
    {
        cout << cur->item << endl;
        cur = cur->next;
    }

} // end display