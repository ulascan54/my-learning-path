#pragma once
#include <iostream>
#include "Boxer.h"
using namespace std;
class Ring
{
public:
    int findBoxer(string name);
    void match(string boxerOneName, string boxerTwoName);
    void printMove(Boxer *hitter, Boxer *taker);
    void hit(Boxer *boxerOne, Boxer *boxerTwo, int *whosTurn);
    void createBoxer(string name, int year, double weight, double height, double health);
    void displayBoxers();
    void reGenerateDamage(Boxer *boxerOne, Boxer *boxerTwo);
    friend ostream &operator<<(ostream &os, const Ring &ring);

private:
    vector<Boxer *> boxers;
};