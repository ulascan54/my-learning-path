#include "Boxer.h"
#include <ctime>
using namespace std;

Boxer::Boxer(string name, int year, double weight, double height, double health)
{
    this->name = name;
    this->year = year;
    this->weight = weight;
    this->height = height;
    this->health = health;
    srand(0);
    int generateDamage = (weight * (height * 100)) / (2023 - year);
    this->damage = rand() % generateDamage + (generateDamage * 80 / 100);
}

string Boxer::getName() const
{
    return name;
}

int Boxer::getYear() const
{
    return year;
}

double Boxer::getWeight() const
{
    return weight;
}

double Boxer::getHeight() const
{
    return height;
}

double Boxer::getHealth() const
{
    return health;
}

double Boxer::getDamage() const
{
    return damage;
}

void Boxer::setHealth(double health)
{
    this->health = health;
}

void Boxer::generateRandomDamage()
{
    srand(time(0));
    int generateDamage = (weight * (height * 100)) / (2023 - year);
    damage = rand() % generateDamage + (generateDamage * (rand() % 100 + 50) / 100);
}