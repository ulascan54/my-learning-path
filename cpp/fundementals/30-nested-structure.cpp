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
    Address address;
};

int main()
{
    Employee employee = {12,
                         "John",
                         "Programmer",
                         {"istanbul", 34}};

    cout << employee.id << " " << employee.name << " " << employee.department << " " << employee.address.cityName << " " << employee.address.No << endl;

    return 0;
}
