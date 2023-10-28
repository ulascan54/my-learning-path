#include "Ring.h"
#include <ctime>

int Ring::findBoxer(string name)
{
    for (int i = 0; i < boxers.size(); i++)
    {

        if (boxers.at(i)->getName() == name)
        {
            return i;
        }
    }
    return -1;
}

void Ring::createBoxer(string name, int year, double weight, double height, double health)
{
    if (findBoxer(name) != -1)
    {
        throw CustomError("createBoxer", "Boxer already exists", 404);
    }
    else
    {
        Boxer *boxer = new Boxer(name, year, weight, height, health);
        boxers.push_back(boxer);
    }
}

ostream &operator<<(ostream &os, const vector<Boxer *> &boxers)
{
    os << "Boxers: " << endl;
    for (int i = 0; i < boxers.size(); i++)
    {
        os << "Name :" << boxers.at(i)->getName() << endl;
        os << "Health :" << boxers.at(i)->getHealth() << endl;
        os << "Height :" << boxers.at(i)->getHeight() << endl;
        os << "Weight :" << boxers.at(i)->getWeight() << endl;
        os << "Year :" << boxers.at(i)->getYear() << endl;
        os << "Damage :" << boxers.at(i)->getDamage() << endl;
    }
    cout << "---------------------------------------------------" << endl;
    return os;
}

void Ring::displayBoxers()
{
    cout << boxers << endl;
}

void Ring::printMove(Boxer *hitter, Boxer *taker)
{
    static int move = 1;
    cout << move << ". Move:" << endl;
    cout << hitter->getName() << "--"
         << hitter->getDamage() << "--> "
         << taker->getName() << endl;
    cout << taker->getName() << ": Current health:" << taker->getHealth() << endl;
    cout << "---------------------------------------------------" << endl;
    move++;
}

void Ring::hit(Boxer *boxerOne, Boxer *boxerTwo, int *whosTurn)
{
    if (*whosTurn == 1)
    {
        int move = boxerTwo->getHealth() - boxerOne->getDamage();
        boxerTwo->setHealth(move <= 0 ? 0 : move);
        reGenerateDamage(boxerOne, boxerTwo);
        printMove(boxerOne, boxerTwo);
        *whosTurn = 2;
    }
    else if (*whosTurn == 2)
    {
        int move = boxerOne->getHealth() - boxerTwo->getDamage();
        boxerOne->setHealth(move <= 0 ? 0 : move);
        reGenerateDamage(boxerOne, boxerTwo);
        printMove(boxerTwo, boxerOne);
        *whosTurn = 1;
    }
    else
    {
        throw CustomError("hit", "Unexpected value", 404);
    }
}

void Ring::reGenerateDamage(Boxer *boxerOne, Boxer *boxerTwo)
{
    boxerOne->generateRandomDamage();
    boxerTwo->generateRandomDamage();
}

void Ring::match(string boxerOneName, string boxerTwoName)
{
    if (findBoxer(boxerOneName) != -1 && findBoxer(boxerTwoName) != -1)
    {
        Boxer *boxerOne = boxers.at(findBoxer(boxerOneName));
        Boxer *boxerTwo = boxers.at(findBoxer(boxerTwoName));
        srand(time(0));
        int whosTurn = rand() % 2 + 1;
        while (true)
        {
            hit(boxerOne, boxerTwo, &whosTurn);
            if (boxerOne->getHealth() <= 0)
            {
                cout << "Winner is " << boxerTwo->getName() << endl;
                break;
            }
            else if (boxerTwo->getHealth() <= 0)
            {
                cout << "Winner is " << boxerOne->getName() << endl;
                break;
            }
        }
    }
    else
    {
        throw CustomError("match", "Boxer not found", 404);
    }
}
