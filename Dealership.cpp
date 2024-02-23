//
// Created by tenni on 2/22/2024.
//
#include <iomanip>
#include "Dealership.h"

Dealership::Dealership(std::string name, unsigned int capacity) {
    this->name = name;
    this->capacity = capacity;
}

void Dealership::AddShowroom(Showroom s) {
    if (deals.size() == capacity){
        cout << "Dealership is full, can't add another showroom!" << endl;
    } else{
        deals.push_back(s);
    }
}

float Dealership::GetAveragePrice(){
    float avg = 0;
    float numV = 0;
    for (auto i: deals){
        avg += i.GetInventoryValue();
        numV += float(i.GetVehicleList().size());
    }
    return avg/numV;
}

void Dealership::ShowInventory(){
    for (auto i : deals){
        i.ShowInventory();
        cout << "Average car price: $" << fixed << setprecision(2) << (i.GetInventoryValue())/float(i.GetVehicleList().size());
    }
}