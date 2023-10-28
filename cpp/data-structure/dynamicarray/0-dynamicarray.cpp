#include <iostream>
#include <iomanip>
#include <string>
#include <exception>

using namespace std;

class CustomError
{
public:
    CustomError(const string &msj)
    {
        this->msj = msj;
    }
    string getMsj() const
    {
        return msj;
    }

private:
    string msj;
};

class DynamicArray
{
public:
    DynamicArray()
    {
        m_capacity = 5;
        m_data = new int[m_capacity];
        m_size = 0;
    }

    int size() const
    {
        return m_size;
    }

    int capacity() const
    {
        return m_capacity;
    }

    void push_back(int n)
    {
        if (m_size >= m_capacity)
            return;
        m_data[m_size] = n;
        m_size++;
    }

    int getItemByIndex(int i) const
    {
        if (i < 0 || i > m_size)
            throw CustomError("Error:[getItemByIndex]");
        return m_data[i];
    }

    friend ostream &operator<<(ostream &os, const DynamicArray &arr)
    {
        os << "|";
        for (int i = 0; i < arr.capacity(); i++)
            os << setw(3) << i << setw(1) << "|";
        os << endl
           << "|";
        for (int i = 0; i < arr.capacity(); i++)
            os << setw(3) << "---" << setw(1) << "|";
        os << endl
           << "|";
        for (int i = 0; i < arr.size(); i++)
            os << setw(3) << arr.getItemByIndex(i) << setw(1) << "|";
        for (int i = arr.size(); i < arr.capacity(); i++)
            os << setw(3) << "bos" << setw(1) << "|";
        os << endl
           << endl;
        return os;
    }

    ~DynamicArray()
    {
        delete[] m_data;
    }

private:
    int m_size;
    int m_capacity;
    int *m_data;
};

int main()
{
    try
    {
        DynamicArray arr;
        arr.push_back(5);
        cout << arr;
        arr.push_back(15);
        cout << arr;
        arr.push_back(25);
        cout << arr;
    }
    catch (CustomError &e)
    {
        cout << e.getMsj() << endl;
    }

    return 0;
}