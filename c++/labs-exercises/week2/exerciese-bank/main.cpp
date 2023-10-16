#include <iostream>
#include "./Bank.cpp"
using namespace std;

int main()
{
    Bank bank;
    bank.createAccount("ulaş", "123", 1000);
    bank.getBalance("ulaş", "123");
    return 0;
}
