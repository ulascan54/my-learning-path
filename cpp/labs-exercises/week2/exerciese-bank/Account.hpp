#pragma once

#include <iostream>
using namespace std;

class Account
{
private:
    int userId;
    string name;
    string password;
    double balance;

public:
    Account(string name, string password, double balance);

    string getName();
    void setName(string name);

    string getPass();
    void setPass(string name);

    double getBalance();
    void setBalance(double balance);
    virtual ~Account();
};
