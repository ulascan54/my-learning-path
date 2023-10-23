#ifndef BANK_H
#define BANK_H
#include <iostream>
#include <vector>
#include "Account.cpp"

using namespace std;

class Bank
{
public:
    vector<Account> accounts;
    Bank();
    virtual ~Bank();
    Account *find_account(string name, string password);               // returns pointer of account found
    bool deposit(string name, string password, double val);            // increase accounts balance 'val' amount and returns whether account is found
    bool withdraw(string name, string password, double val);           // decrease accounts balance 'val' amount and returns whether account is found
    double get_balance(string name, string password);                  // get balance of corresponding account
    bool create_account(string name, string password, double balance); // create an account
    bool delete_account(string name, string password);                 // delete an account
    void print_database();

protected:
private:
};

#endif // BANK_H
