#include "./Account.hpp"

Account::Account(string name, string password, double balance)
{
    this->userId = rand() % 100;
    this->name = name;
    this->password = password;
    this->balance = balance;
};

string Account::getName()
{
    return this->name;
};

void Account::setName(string name)
{
    this->name = name;
}

string Account::getPass()
{
    return this->password;
};

void Account::setPass(string password)
{
    this->password = password;
}

double Account::getBalance()
{
    return this->balance;
};

void Account::setBalance(double balance)
{
    this->balance = balance;
}

Account::~Account(){
    // dtor
};