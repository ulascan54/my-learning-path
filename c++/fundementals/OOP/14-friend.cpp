#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int age;
    int salary;

public:
    Employee(string name, int age, int salary)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    friend void showInfos(Employee employee);
    friend class Test;
};

class Test
{
public:
    static void showInfos(Employee employee)
    {

        cout << employee.name << endl;
        cout << employee.age << endl;
        cout << employee.salary << endl;
    }
};

void showInfos(Employee employee)
{
    cout << employee.name << endl;
    cout << employee.age << endl;
    cout << employee.salary << endl;
}

int main()
{
    Employee employee("Ulaş", 33, 2000);

    showInfos(employee);
    Test::showInfos(employee);
    return 0;
}
