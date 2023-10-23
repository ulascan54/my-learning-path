#pragma once

#include <unordered_map>
#include <string>

class Inventory
{
private:
    std::unordered_map<std::string, int> parts;

public:
    void addPart(const std::string &partName, int quantity);
    bool usePart(const std::string &partName);
    void displayInventory() const;
};

#include "Inventory.cpp"