#pragma once
#include <iostream>
using namespace std;
class CustomError
{
private:
    string msj;
    string title;
    int status;

public:
    CustomError(string title, string msj, int status);
    void displayMsj() const;
};