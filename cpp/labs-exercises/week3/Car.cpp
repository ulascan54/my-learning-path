#include "Car.h"
#include <iostream>

void Car::displayInfo() const
{
    std::cout << "Car Type: " << carType << "\n"
              << "License Plate: " << licensePlate << "\n"
              << "Model: " << model << "\n"
              << "Year: " << year << "\n"
              << "Mileage: " << mileage << " miles\n";
}
