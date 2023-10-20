#include <iostream>

using namespace std;

class Student
{
public:
    string name;

    void printName()
    {
        cout << "My name is " << name << endl;
    }
};

int main(int argc, char const *argv[])
{

    Student student = {"ulaş"};
    Student student2 = {"can"};

    student.printName();
    student2.printName();

    return 0;
}
