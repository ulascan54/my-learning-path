#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int salary;

public:
    Employee(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }
    void setName(string name)
    {
        this->name = name;
    };
    string getName()
    {
        return this->name;
    };

    void setSalary(int salary)
    {
        if (salary < 0)
        {
            cout << "geçersiz değer girdiniz.." << endl;
        }
        else
        {
            this->salary = salary;
        }
    };
    int getSalary()
    {
        return this->salary;
    };
    void showInfos()
    {
        cout << "name: " << this->name << endl;
        cout << "salary: " << this->salary << endl;
    }
};

int main(int argc, char const *argv[])
{
    Employee employee("ulaş", 2000);

    employee.showInfos();

    return 0;
}
