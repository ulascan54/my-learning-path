#include <iostream>
#include "Bank.cpp"

using namespace std;

int main()
{
    Bank DataBank;
    DataBank.create_account("gulsah", "123", 100.00);
    DataBank.create_account("aras", "111", 200.00);
    DataBank.print_database();

    DataBank.deposit("gulsah", "123", 30.00);
    DataBank.withdraw("aras", "111", 50.00);
    DataBank.print_database();

    return 0;
}
