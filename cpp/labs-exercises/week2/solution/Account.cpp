#include "Account.h"

Account::Account(string username, string password, double balance)
{
    this->username = username; // matching the parameters with class variables
    this->password = password;
    this->balance = balance;
}

Account::~Account()
{
    // dtor
}