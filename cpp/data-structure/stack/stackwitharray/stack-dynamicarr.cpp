#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

template <class T>
class Stack
{
private:
    int top;
    T *data;
    int capacity;
    void grow(int ncap);

public:
    Stack();
    void push(T value);
    void pop();
    T getTop();
    bool isEmpty();
    ~Stack();
    friend ostream &operator<<(ostream &os, Stack &stack);
};

template <class T>
void Stack<T>::grow(int ncap)
{
    T *newArea = new T[capacity + ncap];
    for (int i = 0; i <= top; i++)
        newArea[i] = data[i];
    delete[] data;
    data = newArea;
    capacity = capacity + ncap;
}

template <class T>
Stack<T>::Stack()
{
    capacity = 5;
    data = NULL;
    top = -1;
}

template <class T>
void Stack<T>::push(T value)
{
    if (top = capacity - 1)
        grow(capacity);
    top++;
    data[top] = value;
}

template <class T>
void Stack<T>::pop()
{
    if (top != -1)
    {
        top--;
    }
}
template <class T>
T Stack<T>::getTop()
{
    if (top != -1)
    {
        return data[top];
    }
}
template <class T>
bool Stack<T>::isEmpty()
{
    if (top == -1)
        return true;
    return false;
};

template <class T>
Stack<T>::~Stack()
{
    cout << "yok edildi" << endl;
}

template <class T>
ostream &operator<<(ostream &os, Stack<T> &stack)
{
    os << "---->";
    for (int i = stack.top; i >= 0; i--)
    {
        os << stack.data[i] << endl
           << "     ";
    }
    os << endl;
    return os;
}

int main()
{
    Stack<int> s;
    s.push(11);
    s.push(21);
    s.push(31);
    s.push(41);
    s.push(51);

    cout << s << endl;

    return 0;
}
