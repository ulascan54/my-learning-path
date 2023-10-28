#pragma once
#include <iostream>
#include "Boxer.h"
using namespace std;
class Ring
{
public:
    void match(string boxerOneName, string boxerTwoName);
    int findBoxer(string name);
    void printMove(Boxer *hitter, Boxer *taker);
    void hit(Boxer *boxerOne, Boxer *boxerTwo, int *whosTurn);
    void createBoxer(string name, int year, double weight, double height, double health);
    void displayBoxers();
    friend ostream &operator<<(ostream &os, const Ring &ring);
    void reGenerateDamage(Boxer *boxerOne, Boxer *boxerTwo);

private:
    vector<Boxer *> boxers;
};