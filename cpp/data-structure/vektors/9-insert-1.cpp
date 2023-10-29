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
    void reset(int index = 0, int cap = 1)
    {
        delete[] data;
        data = NULL;
        this->index = index;
        this->cap = cap;
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
    void clear()
    {
        reset();
        data = new T[cap];
    }
    void _swap(T &a, T &b)
    {
        T tmp = a;
        a = b;
        b = tmp;
    }
    void insert(const T *pos, const T &value)
    {
        if (begin() <= pos && pos <= end())
        {
            int index = pos - begin();
            push_back(value);
            for (int i = size() - 1; i > index; i--)
            {
                _swap(data[i], data[i - 1]);
            }
        }
        else
        {
            throw "error: vector inserts";
        }
    }
};

int main()
{
    try
    {
        vectore<int> v;
        v.push_back(2);
        v.push_back(10);
        v.push_back(15);
        v.push_back(20);
        v.push_back(50);

        int *begin = v.begin();
        int *end = v.end();

        while (begin != end)
        {
            cout << *begin << " ";
            begin++;
        }
        cout << endl;

        begin = v.begin();
        end = v.end();
        v.insert((begin + 2), 99);
        v.insert(&v[3], 2222);
        while (begin != end)
        {
            cout << *begin << " ";
            begin++;
        }
        cout << endl;
    }
    catch (const char *exception)
    {
        cout << exception << endl;
    }

    return 0;
}