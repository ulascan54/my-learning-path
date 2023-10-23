#pragma once

#include <vector>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "ServiceRecord.h"
#include "Inventory.h"

class ServiceCenter
{
private:
    std::vector<Vehicle *> vehicles;
    std::vector<ServiceRecord> records;
    Inventory inventory;

public:
    void addInventoryPart(const std::string &partName, int quantity);
    void displayInventory() const;
    void displayServiceHistory(Vehicle *vehicle) const;
    void performService(Vehicle *vehicle, const std::string &date, const std::vector<std::string> &partsUsed);
    void registerVehicle(Vehicle *vehicle);
};

#include "ServiceCenter.cpp"