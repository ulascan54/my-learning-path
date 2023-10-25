#include <iostream>
#include <vector>
#include "ServiceCenter.h"
#include "Car.h"
#include "Truck.h"

int main()
{
    // Create a service center
    ServiceCenter serviceCenter;

    // Add some parts to the inventory
    serviceCenter.addInventoryPart("Oil filter", 20);
    serviceCenter.addInventoryPart("Brake pads", 15);
    serviceCenter.addInventoryPart("Windshield wipers", 30);

    // Register vehicles with the service center
    Car *myCar = new Car("ABC123", "Sedan", 2015, 50000, "Sedan");
    Truck *myTruck = new Truck("XYZ789", "Pickup", 2010, 75000, 1000.0);

    serviceCenter.registerVehicle(myCar);
    serviceCenter.registerVehicle(myTruck);

    // Perform services on the vehicles
    std::vector<std::string> partsChangedForCar;
    partsChangedForCar.push_back("Oil filter");
    partsChangedForCar.push_back("Brake pads");
    serviceCenter.performService(myCar, "2023-10-21", partsChangedForCar);

    std::vector<std::string> partsChangedForTruck;
    partsChangedForTruck.push_back("Windshield wipers");
    serviceCenter.performService(myTruck, "2023-10-22", partsChangedForTruck);

    // Display service history
    std::cout << "Service history for my car:" << std::endl;
    serviceCenter.displayServiceHistory(myCar);

    std::cout << "\nService history for my truck:" << std::endl;
    serviceCenter.displayServiceHistory(myTruck);

    // Display remaining inventory
    std::cout << "\nRemaining inventory:" << std::endl;
    serviceCenter.displayInventory();

    // Clean up dynamically allocated memory
    delete myCar;
    delete myTruck;

    return 0;
}
