#pragma once

#include <iostream>
#include "./Account.cpp"
using namespace std;

class Bank
{
public:
    vector<Account> accounts;

public:
    bool findAccount(string name, string password);
    void createAccount(string name, string password, double balance);
    void deleteAccount(string name, string password);

    void deposit(string name, string password, double amount);
    void withdraw(string name, string password, double amount);
    void getBalance(string name, string password);
    void printDatabase(string name, string password);
};
