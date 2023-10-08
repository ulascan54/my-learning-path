#include <iostream>

using namespace std;
class Employee
{
public:
    Employee()
    {
        cout << "constructure çalıştı" << endl;
    }

    ~Employee()
    {
        cout << "destructure çalıştı" << endl;
    }
};
int main(int argc, char const *argv[])
{
    Employee *emp = new Employee();
    delete emp;
    return 0;
}
