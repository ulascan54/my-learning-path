#include <iostream>

using namespace std;
class Employee
{
public:
    string *s;
    int *i;
    Employee(string str, int ivalue)
    {
        s = new string;
        i = new int;

        *s = str;
        *i = ivalue;
    }

    void show()
    {
        cout << "string değer:" << *s << endl;
        cout << "int değer:" << *i << endl;
    }

    ~Employee()
    {
        delete s;
        delete i;

        cout << "destructure çalıştı" << endl;
    }
};
int main(int argc, char const *argv[])
{
    Employee *emp = new Employee("ulaş", 20);

    emp->show();

    delete emp;
    return 0;
}
