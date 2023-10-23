#pragma once

#include "Vehicle.h"

class Truck : public Vehicle
{
private:
    double maxCargoWeight;

public:
    Truck(std::string license, std::string mod, int yr, double miles, double maxCargo)
        : Vehicle(license, mod, yr, miles), maxCargoWeight(maxCargo) {}

    // Getter for max cargo weight
    void displayInfo() const override;
};

#include "Truck.cpp"