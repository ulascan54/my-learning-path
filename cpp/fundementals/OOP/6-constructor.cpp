#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int salary;

public:
    Employee(string n, int s)
    {
        name = n;
        salary = s;
    }
    void setName(string n)
    {
        name = n;
    };
    string getName()
    {
        return name;
    };

    void setSalary(int n)
    {
        if (salary < 0)
        {
            cout << "geçersiz değer girdiniz.." << endl;
        }
        else
        {
            salary = n;
        }
    };
    int getSalary()
    {
        return salary;
    };
    void showInfos()
    {
        cout << "name: " << name << endl;
        cout << "salary: " << salary << endl;
    }
};

int main(int argc, char const *argv[])
{
    Employee employee("ulaş", 2000);

    employee.showInfos();

    return 0;
}
