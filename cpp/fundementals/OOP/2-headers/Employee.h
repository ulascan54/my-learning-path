#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    int salary;

    void showInfos();
};

#endif /* EMPLOYEE_H_ */