#include <iostream>
#include "./Bank.cpp"
using namespace std;

int main()
{
    Bank bank;
    bank.createAccount("ulaş", "123", 1000);
    bank.createAccount("can", "345", 2000);
    bank.createAccount("demirbag", "567", 3000);

    bank.printDatabase();

    bank.deleteAccount("can", "345");
    bank.printDatabase();

    bank.getBalance("ulaş", "123");
    bank.deposit("ulaş", "123", 2000);
    bank.getBalance("ulaş", "123");
    bank.withdraw("ulaş", "123", 5000);
    bank.withdraw("ulaş", "123", 2000);
    bank.getBalance("ulaş", "123");
    bank.printDatabase();

    return 0;
}
