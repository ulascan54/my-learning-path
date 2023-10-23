#include "Bank.h"

Bank::Bank()
{
    // ctor
}

Bank::~Bank()
{
    // dtor
}
Account *Bank::find_account(string name, string password)
{
    vector<Account>::iterator it;
    for (it = accounts.begin(); it != accounts.end(); ++it)
    {
        if (((*it).username == name) && ((*it).password == password))
        {
            return &(*it);
        }
    }
    return 0;
}
bool Bank::deposit(string name, string password, double val)
{
    if (find_account(name, password) != 0)
    {
        (*find_account(name, password)).balance += val;
        return true;
    }
    else
        return false;
}
bool Bank::withdraw(string name, string password, double val)
{
    if (find_account(name, password) != 0)
    {
        (*find_account(name, password)).balance -= val;
        return true;
    }
    else
        return false;
}
double Bank::get_balance(string name, string password)
{
    if (find_account(name, password) != 0)
        return (*find_account(name, password)).balance;
    else
        return 0;
}
bool Bank::create_account(string name, string password, double balance)
{
    if (find_account(name, password) == 0)
    {
        accounts.push_back(Account(name, password, balance));
        return true;
    }
    else
        return false;
}
bool Bank::delete_account(string name, string password)
{
    vector<Account>::iterator it;
    for (it = accounts.begin(); it != accounts.end(); ++it)
    {
        if (((*it).username == name) && ((*it).password == password))
        {
            accounts.erase(it);
            return true;
        }
    }
    return false;
}
void Bank::print_database()
{
    int i = 1;
    vector<Account>::iterator it;
    cout << "Bank Accounts" << endl;
    cout << "----------------------" << endl;
    for (it = accounts.begin(); it != accounts.end(); ++it)
    {
        cout << "Account No#" << i << endl;
        cout << "Name: " << (*it).username << endl;
        cout << "Balance: " << (*it).balance << endl;
        cout << "----------------------" << endl;
        i++;
    }
}
