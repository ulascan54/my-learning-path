#include "Truck.h"
#include <iostream>

void Truck::displayInfo() const
{
    std::cout << "Max Cargo Weight: " << maxCargoWeight << "\n"
              << "License Plate: " << licensePlate << "\n"
              << "Model: " << model << "\n"
              << "Year: " << year << "\n"
              << "Mileage: " << mileage << " miles\n";
}
