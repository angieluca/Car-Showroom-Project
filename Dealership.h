#pragma once
#include "Showroom.h"

class Dealership{
    vector<Showroom> deals;
    string name;
    unsigned int capacity;

public:
    //constructor
    Dealership(string name = "Generic Dealership", unsigned int capacity = 0);

    //Behaviors
    void AddShowroom(Showroom s);
    float GetAveragePrice();
    void ShowInventory();

};