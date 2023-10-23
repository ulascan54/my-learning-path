#include "ServiceRecord.h"
#include <iostream>

void ServiceRecord::addPartChanged(const std::string &part)
{
    partsChanged.push_back(part);
}

void ServiceRecord::displayRecord() const
{
    for (int i = 0; i < partsChanged.size(); i++)
    {
        std::cout << partsChanged.at(i) << std::endl;
    }
}

Vehicle *ServiceRecord::getVehicle() const
{
    return vehicle;
}

std::string ServiceRecord::getServiceDate() const
{
    return serviceDate;
}

std::vector<std::string> ServiceRecord::getPartsChanged() const
{
    return partsChanged;
}
