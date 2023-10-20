#include <iostream>
#include <queue>
using namespace std;

class Customer
{
    string name;
    int count;

public:
    Customer(string name, int count) : name(name), count(count) {}
    friend ostream &operator<<(ostream &, Customer &);
};

ostream &operator<<(ostream &o, Customer &c)
{
    o << c.name << " " << c.count << " pide almak istiyor ";

    return o;
}

class Restaurant
{
    queue<Customer *> q;

public:
    void sellFood()
    {
        if (q.empty())
            cout << "pide almayı bekleyen müşterimiz yok." << endl;
        else
        {
            Customer c = *q.front();
            cout << c << " pidesi verildi." << endl;
            q.pop();
        }
    }

    void insertQueue(Customer *c)
    {
        if (c)
            q.push(c);
    }

    friend ostream &operator<<(ostream &, Restaurant &);
};

ostream &operator<<(ostream &o, Restaurant &r)
{
    if (r.q.empty())
    {
        o << "pide almayı bekleyen müşterimiz yok." << endl;
    }
    else
    {
        o << "Kuyrukta bekleyen müsteriler: " << endl;

        queue<Customer *> q = r.q;
        int i = 1;
        while (!q.empty())
        {
            Customer c = *q.front();
            o << i << ". " << c << endl;
            i++;
            q.pop();
        }
        o << endl;
    }

    return o;
}

int main()
{
    Customer customer("Ulaş", 4);
    Customer customer2("Can", 2);
    Customer customer3("Vesile", 3);
    Customer customer4("Talha", 1);
    Customer customer5("Yusuf", 1);
    Customer customer6("Furkan", 9);
    Customer customer7("Kenan", 1);
    cout << customer << endl;

    Restaurant restaurant;

    restaurant.insertQueue(&customer);
    restaurant.insertQueue(&customer2);
    restaurant.insertQueue(&customer3);
    restaurant.insertQueue(&customer4);
    restaurant.insertQueue(&customer5);
    restaurant.insertQueue(&customer7);

    cout << restaurant << endl;

    restaurant.sellFood();
    cout << restaurant << endl;

    restaurant.sellFood();
    restaurant.insertQueue(&customer6);
    cout << restaurant << endl;

    restaurant.sellFood();
    cout << restaurant << endl;

    restaurant.sellFood();
    restaurant.sellFood();
    restaurant.sellFood();
    cout << restaurant << endl;

    restaurant.sellFood();
    restaurant.sellFood();
    restaurant.sellFood();
    cout << restaurant << endl;

    return 0;
}