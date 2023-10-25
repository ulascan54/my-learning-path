#include "./Vehicle.h"
#include <iostream>

void Vehicle::displayInfo() const
{
    std::cout
        << "License Plate: " << licensePlate << "\n"
        << "Model: " << model << "\n"
        << "Year: " << year << "\n"
        << "Mileage: " << mileage << " miles\n";
}; // Pure virtual function

// Getter for license plate
std::string Vehicle::getLicensePlate() const
{
    return licensePlate;
}
// Getter for model
std::string Vehicle::getModel() const
{
    return model;
}
// Getter for year
int Vehicle::getYear() const
{
    return year;
}
// Getter for mileage
double Vehicle::getMileage() const
{
    return mileage;
}

Vehicle::~Vehicle()
{
    // dtor
}
// Virtual destructor
