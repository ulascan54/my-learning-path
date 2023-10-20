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
};

int main()
{
    vectore<int> v;
    cout << v.capacity() << endl;
    cout << v.size() << endl;

    return 0;
}