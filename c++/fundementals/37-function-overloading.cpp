#include <iostream>

using namespace std;

void SayHi()
{
    cout << "Hello" << endl;
}

void SayHi(string name)
{
    cout << "Hello " << name << endl;
}

void SayHi(string name, string surname)
{
    cout << "Hello " << name << "," << surname << endl;
}
int main(int argc, char const *argv[])
{
    SayHi();

    SayHi("ulaş can");
    SayHi("ulaş can", "demirbağ");

    return 0;
}
