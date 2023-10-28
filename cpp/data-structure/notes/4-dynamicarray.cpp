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
        this->msj = "Error:[" + msj + "]";
    }
    string getMsj() const
    {
        return msj;
    }

private:
    string msj;
};

template <class T>
class DynamicArray
{
public:
    DynamicArray()
    {
        m_capacity = 5;
        m_data = new T[m_capacity];
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

    void grow()
    {
        m_capacity = m_capacity * 2;
        T *getNewArr = new T[m_capacity];
        for (int i = 0; i < m_size; i++)
        {
            getNewArr[i] = m_data[i];
        }
        delete[] m_data;
        m_data = getNewArr;
        getNewArr = NULL;
    }

    void deleteAt(int index)
    {
        if (index >= 0 && index <= m_size)
        {
            if (m_size >= m_capacity)
                grow();
            for (int i = index; i < m_size - 1; i++)
                m_data[i] = m_data[i + 1];
            m_size--;
        }
        else
        {
            throw CustomError("Gecersiz index!!");
        }
    }

    void push_back(const T &n)
    {
        // if (m_size >= m_capacity)
        //     grow();
        // m_data[m_size] =`` n;
        // m_size++;
        at(m_size, n);
    }

    void at(int index, const T &n)
    {
        if (index >= 0 && index <= m_size)
        {
            if (m_size >= m_capacity)
                grow();
            for (int i = m_size - 1; i > index; i--)
                m_data[i + 1] = m_data[i];
            m_data[index] = n;
            m_size++;
        }
        else
        {
            throw CustomError("Gecersiz index!!");
        }
    }

    const T &getItemByIndex(int i) const
    {
        if (i < 0 || i > m_size)
            throw CustomError("getItemByIndex");
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
    T *m_data;
};

class Number
{
public:
    Number()
    {
        cout << "Number()" << endl;
    }
    Number(const Number &n)
    {
        cout << "Number(const Number& n)" << endl;
    }
};

int main()
{
    system("clear");

    DynamicArray<Number> arr;
    cout << "---" << endl;
    Number s;
    Number s2 = s; // atama kurucusu
    try
    {
        DynamicArray<int> arr;
        int n;
        int index;
        bool isTrue = true;

        while (isTrue)
        {
            cout << arr;
            cout << "1.sona ekle" << endl;
            cout << "2.araya ekle" << endl;
            cout << "3.aradan cikar" << endl;
            cout << "4.cikis" << endl;
            cin >> n;
            switch (n)
            {
            case 1:
                arr.push_back(rand() % 100);
                break;
            case 2:
                cout << "index girin:" << endl;
                cin >> index;
                arr.at(index, rand() % 100);
                break;
            case 3:
                cout << "index girin:" << endl;
                cin >> index;
                arr.deleteAt(index);
                break;
            case 4:
                cout << "Cikis yaptiniz..." << endl;
                isTrue = false;
                break;
            default:
                throw CustomError("Yalnizca 1 ve 4 arasinda secim yapiniz!!");
                break;
            }
        }
    }
    catch (CustomError &e)
    {
        cout << e.getMsj() << endl;
    }

    return 0;
}