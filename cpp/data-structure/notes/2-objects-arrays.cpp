#include <iostream>
using namespace std;

class Number
{
public:
    Number()
    {
        s1 = rand() % 100;
        s2 = rand() % 100;
        cout << this << "adresindeki nesne oluşturuldu." << endl;
    }
    ~Number()
    {
        cout << this << "adresindeki nesne yok edildi." << endl;
    }

    void write()
    {
        cout << "s1,s2: " << s1 << "," << s2 << endl;
    }

private:
    int s1;
    int s2;
};

int main()
{
    Number **pt = new Number *[10]; // dinamik bir işaretçi dizişi oluşumu.

    pt[0] = new Number;
    pt[1] = new Number[10];
    pt[1][1].write();

    cout << "pt: " << pt[0] << endl;
    cout << "pt: " << pt[1] << endl;

    delete[] pt[1];
    delete pt[0];
    delete[] pt;
    cout << "----------------------------------------------------------------" << endl;

    Number *ptr[10]; // işaretçi dizisi oluşturmak.

    ptr[0] = new Number;
    cout << "----------------------------------------------------------------" << endl;

    ptr[1] = new Number[10];

    ptr[0]->write();

    ptr[1][2].write(); // işaretçinin gösterdiği dizinin değerlerini yazdırıyor.

    cout << "----------------------------------------------------------------" << endl;
    for (int i = 0; i < 10; i++)
    {
        ptr[1][i].write(); // işaretçinin gösterdiği dizinin değerlerini yazdırıyor.
    }

    delete ptr[0];

    delete[] ptr[1];

    cout << "----------------------------------------------------------------" << endl;

    Number *p = new Number[10];

    for (int i = 0; i < 10; i++)
    {
        //(p + i)->write();
        //(*(p + i)).write();
        p[i].write();
    }

    delete[] p;
    // Number *p = new Number;

    // delete p;
    // if(p)
    //     delete p;

    // hata örneği
    //     Number *p;
    //     delete p;
    //     p->write();
    return 0;
}
