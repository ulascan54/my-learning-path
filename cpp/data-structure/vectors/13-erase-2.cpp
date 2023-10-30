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
    void insert(int idx, const T &value)
    {
        const T *pos = &data[idx];
        if (begin() <= pos && pos <= end())
        {
            int indx = pos - begin();
            push_back(value);
            for (int i = size() - 1; i > indx; i--)
            {
                _swap(data[i], data[i - 1]);
            }
        }
        else
        {
            throw "error: vector inserts";
        }
    }
    void insert(int idx, const T &value, int n)
    {
        const T *pos = &data[idx];
        for (int i = 0; i < n; i++)
        {
            insert(idx + i, value);
        }
    }
    void insert(int idx, const T *first, const T *last)
    {
        const T *pos = &data[idx];
        int len = last - first;
        for (int i = 0; i < len; i++)
        {
            insert(idx + i, *first);
            first++;
        }
    }

    void printVector()
    {
        int *b = begin();
        int *e = end();
        while (b != e)
        {
            cout << *b << " ";
            b++;
        }
        cout << endl;
    }

    void erase(int idx) // by index
    {
        T *tmp = new T[cap];
        int x = 0;
        for (int i = 0; i < size(); i++)
        {
            if (i == idx)
            {
                continue;
            }

            tmp[x] = data[i];
            x++;
        }

        delete[] data;
        data = tmp;
        index--;
        shrink();
    }

    void erase(const T *pos) // by pointer
    {
        if (begin() <= pos || pos >= end())
        {
            int idx = pos - begin();
            for (int i = idx; i < size(); i++)
                data[i] = data[i + 1];
            pop_back();
        }
        else
            throw "Error: erase not working!";
    }

    void erase(int first, int last) // multiple erase by index
    {
        T *tmp = new T[cap];
        int x = 0;
        for (int i = 0; i < size(); i++)
        {
            if (i >= first && i <= last)
            {
                continue;
            }
            tmp[x++] = data[i];
        }
        index = x;
        delete[] data;
        data = tmp;
        shrink();
    }

    void erase(const T *first, const T *last) // multiple erase by pointers
    {
        int f = first - begin();
        int l = last - begin();

        while (f != (l + 1))
        {
            erase(f + begin());
            l--;
        }
    }
};

int main()
{
    vectore<int> v;
    v.push_back(2);
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);
    v.push_back(50);
    v.printVector();
    v.erase(1);
    v.printVector();
    v.erase(&v[2]);
    v.printVector();
    v.push_back(20);
    v.push_back(80);
    v.printVector();
    v.erase(1, 3);
    v.printVector();
    v.push_back(20);
    v.push_back(80);
    v.printVector();
    v.erase(&v[0], &v[2]);
    v.printVector();

    return 0;
}