#include <iostream>
using namespace std;

template <class T>
class vectore
{
    T *data;
    int cap;      // dizi boyutu
    int index;    // sıradaki elemanın indexi
    void growth() // dinamik büyüme
    {
        if (size() >= capacity())
        {
            cap *= 2;
            T *tmp = new T[cap];
            for (int i = 0; i < size(); i++)
            {
                tmp[i] = data[i];
            }
            delete[] data;
            data = tmp;
        }
    }

    void shrink() // dinamik küçülme
    {
        if (size() < capacity() / 2)
        {
            cap /= 2;
            T *tmp = new T[cap];
            for (int i = 0; i < size(); i++)
            {
                tmp[i] = data[i];
            }
            delete[] data;
            data = tmp;
        }
    }

public:
    vectore() : data(NULL), index(0), cap(1)
    {
        data = new T[cap];
    }
    int size() const { return index; }
    int capacity() const { return cap; }

    void push_back(const T &value)
    {
        growth();
        data[index++] = value;
    }

    void pop_back()
    {
        if (isEmpty())
            throw "Error: vector is empty";
        index--;
        shrink();
    }

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

    T *begin() const
    {
        return data;
    }

    T *end() const
    {
        return data + size();
    }

    T &at(int indis)
    {
        if (indis >= 0 && indis < size())
        {
            return data[indis];
        }
        else
            throw "Error: vector indis overflow";
    }

    T &operator[](int indis)
    {
        return at(indis);
    }
};

int main()
{
    try
    {
        vectore<int> v;
        v.push_back(5);
        v.push_back(15);
        v.push_back(25);
        v.push_back(35);
        v.push_back(45);
        v.push_back(55);

        cout << v.at(2) << endl;
        cout << v[4] << endl; // operator overloading
    }
    catch (const char *exception)
    {
        cout << exception << endl;
    }

    return 0;
}