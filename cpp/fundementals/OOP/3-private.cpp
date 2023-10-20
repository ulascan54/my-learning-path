#include <iostream>

using namespace std;

class Employee
{
private:
    int no;
    string name;
    int salary;

public:
    void showInfos()
    {
        cout << "no: " << no << endl;
        cout << "name: " << name << endl;
        cout << "salary: " << salary << endl;
    };

    void setName(string n)
    {
        name = n;
    };
    string getName()
    {
        return name;
    }
};

int main(int argc, char const *argv[])
{
    Employee employee;
    employee.setName("ulaş");
    cout << employee.getName() << endl;
    return 0;
}
