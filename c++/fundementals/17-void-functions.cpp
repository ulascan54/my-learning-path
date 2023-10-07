#include <iostream>

using namespace std;

void sayBye(); // function prototype

void sayHi()
{
    cout << "Hi" << endl;
}

int main(int argc, char const *argv[])
{
    sayHi();
    sayBye();

    return 0;
}

void sayBye()
{
    cout << "Byeee" << endl;
}