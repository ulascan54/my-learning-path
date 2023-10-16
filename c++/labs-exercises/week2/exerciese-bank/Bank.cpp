#include "./Bank.hpp"
#include <iostream>
using namespace std;
bool Bank::findAccount(string name, string password)
{
    vector<Account>::iterator iter;
    iter = this->accounts.begin();
    for (; iter < this->accounts.end(); iter++)
    {
        if ((*iter).getName() == name && (*iter).getPass() == password)
        {
            return true;
        }
    }
    return false;
};

void Bank::createAccount(string name, string password, double balance)
{
    if (!Bank::findAccount(name, password))
    {
        this->accounts.push_back(Account(name, password, balance));
        cout << "Account created" << endl;
    }
    else
    {
        cout << "Already exist!" << endl;
    }
}

void Bank::deleteAccount(string name, string password)
{
    if (Bank::findAccount(name, password) == true)
    {
        cout << "There are no mach any account" << endl;
    }
    else
    {
        vector<Account>::iterator iter = this->accounts.begin();
        for (; iter < this->accounts.end(); iter++)
        {
            this->accounts.erase(iter);
            cout << "Account deleted!" << endl;
        }
    }
}

void Bank::deposit(string name, string password, double amount)
{
    if (Bank::findAccount(name, password) == true)
    {
        cout << "There are no mach any account" << endl;
    }
    else
    {
        if (amount > 0)
        {
            vector<Account>::iterator iter = this->accounts.begin();
            for (; iter < this->accounts.end(); iter++)
            {
                iter->setBalance(iter->getBalance() + amount);
            }
        }
        else
        {
            cout << "Amount cannot be a neagative" << endl;
        }
    }
}

void Bank::withdraw(string name, string password, double amount)
{
    if (Bank::findAccount(name, password) == true)
    {
        cout << "There are no mach any account" << endl;
    }
    else
    {
        if (amount > 0)
        {
            vector<Account>::iterator iter = this->accounts.begin();
            for (; iter < this->accounts.end(); iter++)
            {
                if (iter->getBalance() - amount <= 0)
                {
                    iter->setBalance(iter->getBalance() - amount);
                }
                else
                    cout << "Yetersiz bakiye" << endl;
            }
        }
        else
        {
            cout << "Amount cannot be a neagative" << endl;
        }
    }
}

void Bank::getBalance(string name, string password)
{
    if (Bank::findAccount(name, password))
    {
        vector<Account>::iterator iter = this->accounts.end();
        for (; iter < this->accounts.end(); iter++)
        {
            cout << "noluyo" << endl;
            cout << "Balance: " << (*iter).getBalance() << endl;
        }
    }
    else
    {
        cout << "There are no mach any account" << endl;
    }
}
void Bank::printDatabase(string name, string password)
{
    if (Bank::findAccount(name, password))
    {
        cout << "There are no mach any account" << endl;
    }
    else
    {
        vector<Account>::iterator iter = this->accounts.end();
        for (; iter < this->accounts.end(); iter++)
        {
            cout << "Name: " << iter->getName() << endl;
            cout << "Password: " << iter->getPass() << endl;
            cout << "Balance: " << iter->getName() << endl;
        }
    }
}