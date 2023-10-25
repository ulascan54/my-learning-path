#pragma once

#include <string>

class Vehicle
{
protected:
    std::string licensePlate;
    std::string model;
    int year;
    double mileage;

public:
    Vehicle(std::string license, std::string mod, int yr, double miles)
        : licensePlate(license), model(mod), year(yr), mileage(miles) {}

    virtual void displayInfo() const = 0; // Pure virtual function
    virtual ~Vehicle() {}                 // Virtual destructor

    // Getter for license plate
    std::string getLicensePlate() const;
    // Getter for model
    std::string getModel() const;
    // Getter for year
    int getYear() const;
    // Getter for mileage
    double getMileage() const;
};
