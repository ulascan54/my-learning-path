#include <iostream>
using namespace std;

template <class T>
class vectore
{
    T *data;
    int cap;   // dizi boyutu
    int index; // sıradaki elemanın indexi
public:
    vectore() : data(NULL), index(0), cap(1)
    {
        data = new T[cap];
    }
    int size() const { return index; }
    int capacity() const { return cap; }
    void push_back(const T &value) { data[index++] = value; }
    void pop_back() { index--; }

    bool isEmpty() const
    {
        return (size() == 0);
    }

    T front() const
    {
        if (isEmpty())
            throw "Error: vector is empty";
        return data[0];
    }

    T back() const
    {
        if (isEmpty())
            throw "Error: vector is empty";
        return data[index - 1];
    }
};

int main()
{
    vectore<int> v;
    try
    {
        v.push_back(10);
        cout << v.isEmpty() << endl;
        v.pop_back();
        cout << v.isEmpty() << endl;
        v.push_back(20);
        cout << v.front() << endl;
        cout << v.back() << endl;
    }
    catch (const char *exception)
    {
        cout << exception << endl;
    }

    return 0;
}