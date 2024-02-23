#pragma once
#include "Vehicle.h"

class Showroom{
    string name;
    vector<Vehicle> sr;
    int capacity;

public:
    //Default constructor
    Showroom(string name = "Unnamed Showroom", unsigned int capacity = 0);

    //Accessor
    vector<Vehicle> GetVehicleList();

    //Behaviors
    void AddVehicle(Vehicle v);
    void ShowInventory();
    float GetInventoryValue();
};