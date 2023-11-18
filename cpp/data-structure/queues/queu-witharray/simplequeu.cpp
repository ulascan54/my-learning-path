#include <iostream>
using namespace std;

class Queues
{
public:
    Queues()
    {
        front = 0;
        tail = -1;
        cap = 5;
        size = 0;
        data = new int[cap];
    };
    ~Queues()
    {
        delete[] data;
    };

    void enqueu(int val)
    {
        if (tail == cap - 1)
            grow(cap);
        tail++;
        data[tail] = val;
        size++;
    };
    void dequeu()
    {
        if (size != 0)
        {
            front++;
            size--;
        }
    };
    bool isEmpty()
    {
        if (size == 0)
            return true;
        return false;
    };
    int getFront()
    {
        if (size != 0)
            return data[front];
        return -9999;
    }

    friend ostream &operator<<(ostream &os, Queues &q)
    {
        os << q.tail - q.front << endl;
        if (q.size == 0)
        {
            os << "---QUEUES EMPTY---" << endl;
        }
        else
        {
            if (q.size == 1)
                os << "---"
                   << "ilk-son->";
            else
                os << "---"
                   << "ilk----->";
            for (int i = q.front; i <= q.tail; i++)
            {
                os << i << ":" << q.data[i] << endl;
                if (i == q.tail - 1)
                    os << "son-------->";
                else
                    os << "            ";
            }
            os << endl;
        }

        return os;
    }

private:
    void grow(int len)
    {
        int *area = new int[len + cap];
        int index = 0;
        for (int i = front; i <= tail; i++)
        {
            area[index] = data[i];
            index++;
        }
        if (data)
            delete[] data;
        data = area;
        front = 0;
        tail = size - 1;
    };
    int cap;
    int front;
    int tail;
    int size;
    int *data;
};

int main(int argc, char const *argv[])
{
    Queues q;
    q.enqueu(1);
    q.enqueu(12);
    q.enqueu(14);
    q.enqueu(15);
    q.enqueu(15);
    q.enqueu(15);
    q.enqueu(15);
    q.enqueu(15);
    q.enqueu(15);
    q.enqueu(15);
    q.enqueu(11);
    q.dequeu();
    cout << q;
    return 0;
}
