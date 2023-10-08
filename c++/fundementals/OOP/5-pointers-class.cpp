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
    };

    void setNo(int n)
    {
        no = n;
    };
    int getNo()
    {
        return no;
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
};

int main(int argc, char const *argv[])
{
    Employee *employee = new Employee();

    employee->setName("ulaş");
    employee->setNo(23);
    employee->setSalary(2000);

    cout << employee->getName() << endl;
    cout << employee->getSalary() << endl;
    cout << employee->getNo() << endl;

    return 0;
}
