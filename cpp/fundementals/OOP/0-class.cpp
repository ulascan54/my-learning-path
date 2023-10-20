#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int number;
};

int main(int argc, char const *argv[])
{
    Student student1 = {"ulaş", 123};
    Student student2 = {"can", 23};

    cout << student1.name << "\n"
         << student2.name << endl;

    return 0;
}
