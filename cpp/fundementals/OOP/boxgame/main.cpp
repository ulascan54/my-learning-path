#include <iostream>
#include "Boxer.cpp"
#include "CustomError.cpp"
#include "Ring.cpp"
using namespace std;

int main()
{
    try
    {
        system("clear");
        Ring wwe;
        wwe.createBoxer("Yusuf", 1999, 80, 1.80, 10000);
        wwe.createBoxer("Samet", 2004, 90, 1.90, 10000);
        wwe.displayBoxers();
        wwe.match("Yusuf", "Samet");
    }
    catch (CustomError &e)
    {
        e.displayMsj();
    }

    return 0;
}