#include <iostream>

using namespace std;

template <typename T>
class Arr
{
public:
    Arr()
    {
        totalLength = 10;
        elements = new T[totalLength];
        es = 0;
    }
    void add(T element)
    {
        if (totalLength >= es)
        {
            totalLength *= 2;
            T *newArr = new T[totalLength];
            for (int i = 0; i < es; i++)
            {
                newArr[i] = elements[i];
            }
            delete[] elements;
            elements = newArr;
        }

        elements[es] = element;
        es++;
    }
    T getElement(int index);

private:
    int es;
    int totalLength;
    T *elements;
};

template <typename T>
T Arr<T>::getElement(int index)
{
    if (index >= this->es)
    {
        return T();
        // throw exception("error");
    }

    return this->elements[index];
}

int main(int argc, char const *argv[])
{
    Arr<int> arr;
    arr.add(20);
    cout << arr.getElement(0) << endl;

    Arr<string> sarr;
    sarr.add("hello");
    cout << sarr.getElement(0) << endl;
    return 0;
}
