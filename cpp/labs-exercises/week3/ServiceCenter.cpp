#include "ServiceCenter.h"
#include <iostream>

void ServiceCenter::registerVehicle(Vehicle *vehicle)
{
    vehicles.push_back(vehicle);
}

void ServiceCenter::performService(Vehicle *vehicle, const std::string &date, const std::vector<std::string> &partsUsed)
{
    ServiceRecord newRecord(vehicle, date);
    for (int i = 0; i < partsUsed.size(); i++)
    {
        newRecord.addPartChanged(partsUsed.at(i));
    }
    records.push_back(newRecord);
}

void ServiceCenter::displayServiceHistory(Vehicle *vehicle) const
{
    for (int i = 0; i < vehicles.size(); i++)
    {
        if (records.at(i).getVehicle() == vehicle)
        {
            records.at(i).displayRecord();
        }
    }
}

void ServiceCenter::addInventoryPart(const std::string &partName, int quantity)
{
    inventory.addPart(partName, quantity);
}

void ServiceCenter::displayInventory() const
{
    inventory.displayInventory();
}
