#include "Inventory.h"
#include <iostream>

void Inventory::addPart(const std::string &partName, int quantity)
{
    parts.insert(std::pair<std::string, int>(partName, quantity));
}

bool Inventory::usePart(const std::string &partName)
{
    if (parts.find(partName) != parts.end())
    {
        return true;
    }
    return false;
}

void Inventory::displayInventory() const
{
    std::cout << "Inventory:\n";
    for (const auto &pair : parts)
    {
        const std::string &key = pair.first;
        int value = pair.second;
        std::cout << "Key: " << key << ", Value: " << value << std::endl;
    }
}
