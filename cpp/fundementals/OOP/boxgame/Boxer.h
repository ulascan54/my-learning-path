#pragma once
#include <iostream>
using namespace std;
class Boxer
{
private:
    string name;
    int year;
    double weight;
    double height;
    double health;
    double damage;

public:
    Boxer(string name, int year, double weight, double height, double health);

    string getName() const;
    int getYear() const;
    double getWeight() const;
    double getHeight() const;
    double getHealth() const;
    double getDamage() const;
    void setHealth(double health);
    void generateRandomDamage();
};