#include <iostream>

using namespace std;

struct Address
{
    string cityName;

    int No;
};

struct Employee
{
    int id;
    string name;
    string department;
    Address *address;
};

int main()
{
    Address address = {"istanbul", 34};
    Employee employee = {
        12,
        "John",
        "Programmer", &address};
    Employee *ep = &employee;
    cout << ep->address->cityName << endl;
    cout << ep->address->No << endl;
    return 0;
}
