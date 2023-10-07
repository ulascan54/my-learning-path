#include <iostream>

using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
};

int main()
{
    Employee employee1 = {12,
                          "ulaş can",
                          "bilişim"};

    cout << employee1.name << endl;

    employee1.name = "ulaş";
    cout << employee1.name << endl;

    return 0;
}