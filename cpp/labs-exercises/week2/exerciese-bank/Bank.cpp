#include "./Bank.hpp"
#include <iostream>
using namespace std;

int Bank::findAccount(string name, string password)
{
    for (int i = 0; i < this->accounts.size(); i++)
    {
        if (this->accounts[i].getName() == name && this->accounts[i].getPass() == password)
        {
            return i;
        }
    }

    return -1;
};

void Bank::createAccount(string name, string password, double balance)
{
    if (Bank::findAccount(name, password) != -1)
    {
        cout << "Already exist!" << endl;
    }
    else
    {
        this->accounts.push_back(Account(name, password, balance));
        cout << "--Account created--" << endl;
    }
}

void Bank::deleteAccount(string name, string password)
{
    if (Bank::findAccount(name, password) == -1)
    {
        cout << "There are no mach any account" << endl;
    }
    else
    {
        this->accounts.erase(this->accounts.begin() + Bank::findAccount(name, password));
        cout << "--Account deleted--" << endl;
    }
}

void Bank::deposit(string name, string password, double amount)
{
    if (Bank::findAccount(name, password) == -1)
    {
        cout << "There are no mach any account" << endl;
    }
    else
    {
        if (amount > 0)
        {
            int accountIndex = Bank::findAccount(name, password);
            this->accounts[accountIndex].setBalance(this->accounts[accountIndex].getBalance() + amount);
        }
        else
        {
            cout << "Amount cannot be a neagative" << endl;
        }
    }
}

void Bank::withdraw(string name, string password, double amount)
{
    if (Bank::findAccount(name, password) == -1)
    {
        cout << "There are no mach any account" << endl;
    }
    else
    {
        if (amount > 0)
        {
            int accountIndex = Bank::findAccount(name, password);
            if (this->accounts[accountIndex].getBalance() > amount)
            {
                this->accounts[accountIndex].setBalance(this->accounts[accountIndex].getBalance() - amount);
            }
            else
            {
                cout << "You don't have enough money" << endl;
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
    if (Bank::findAccount(name, password) != -1)
    {
        int accountsIndex = Bank::findAccount(name, password);
        cout << this->accounts[accountsIndex].getName() << "'s balance: " << this->accounts[accountsIndex].getBalance() << endl;
    }
    else
    {
        cout << "There are no mach any account" << endl;
    }
}
void Bank::printDatabase()
{
    for (int i = 0; i < this->accounts.size(); i++)
    {
        cout << "******************************" << endl;
        cout << i + 1 << ". Member name: " << this->accounts[i].getName() << endl;
        cout << i + 1 << ". Member name: " << this->accounts[i].getPass() << endl;
        cout << i + 1 << ". Member name: " << this->accounts[i].getBalance() << endl;
    }
}