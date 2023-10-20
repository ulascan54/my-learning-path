#include <iostream>

using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
};

void showEmployee(Employee employee)
{
    employee.name = "evettttt";

    cout << "Id:" << employee.id << "\nName:" << employee.name << "\nDepartment:" << employee.department << endl;
}

void show(Employee *p)
{
    p->name = "evettttt";
    cout << "Id:" << p->id << "\nName:" << p->name << "\nDepartment:" << p->department << endl;
}

int main()
{
    Employee employee1 = {12,
                          "ulaş",
                          "yazılım"};

    showEmployee(employee1);
    cout << "Employee değiştimi ??:" << employee1.name << endl;
    show(&employee1);
    cout << "Employee değiştimi ??:" << employee1.name << endl;

    return 0;
}
