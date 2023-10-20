#include <iostream>

using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
};

int main(int argc, char const *argv[])
{
    Employee employee1 = {23,
                          "ulaş",
                          "woow"};

    Employee *p = &employee1;

    cout << employee1.name << endl;

    cout << p->department << endl;
    return 0;
}
