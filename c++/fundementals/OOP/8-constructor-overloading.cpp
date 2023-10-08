#include <iostream>

using namespace std;

class Employee2
{
private:
    string name;
    int salary;

public:
    void showInfos()
    {
        cout << "name: " << this->name << endl;
        cout << "salary: " << this->salary << endl;
    }
};

class Employee
{
private:
    string name;
    int salary;

public:
    Employee()
    {
        this->name = "bilgi girilmedi";
        this->salary = 0;
    }
    Employee(string name)
    {
        this->name = name;
        this->salary = 2000;
    }
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
    Employee employee1("ulaş", 1000);
    Employee employee2("can");
    Employee employee3;
    Employee2 employee4;

    employee1.showInfos();
    employee2.showInfos();
    employee3.showInfos();
    cout << "---------------------------" << endl;
    employee4.showInfos(); // default constructure

    return 0;
}
