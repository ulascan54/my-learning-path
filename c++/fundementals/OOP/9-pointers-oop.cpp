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
void deneme(Employee emp)
{
    emp.showInfos();
}

void deneme2(Employee *emp)
{
    emp->showInfos();
}

int main(int argc, char const *argv[])
{
    Employee employee1("ulaş", 1000);
    deneme(employee1);   // callbyvalue
    deneme2(&employee1); // callbyreference
    return 0;
}
