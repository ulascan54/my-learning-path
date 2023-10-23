#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

using namespace std;

class Account
{
public:
    string username;
    string password;
    double balance;

    Account(string username, string password, double balance);
    virtual ~Account();

protected:
private:
};

#endif // ACCOUNT_H
