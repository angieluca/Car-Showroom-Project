//
// Created by tenni on 2/22/2024.
//
#include "Showroom.h"

Showroom::Showroom(std::string name, unsigned int capacity) {
    this->name = name;
    this->capacity = capacity;
}

vector<Vehicle> Showroom::GetVehicleList(){
    return sr;
}

void Showroom::AddVehicle(Vehicle v){
    if (sr.size() == capacity){ //showroom is full
        cout << "Showroom is full! Cannot add " << v.GetYearMakeModel() << endl;
    } else {
        sr.push_back(v);
    }
}

void Showroom::ShowInventory(){
    for (auto i : sr){
        i.Display();
    }
}

float Showroom::GetInventoryValue(){
    float total = 0;
    for (auto i : sr){
        total += i.GetPrice(); //add each vehicle's price
    }
    return total;
}

