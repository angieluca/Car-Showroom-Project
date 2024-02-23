//
// Created by tenni on 2/22/2024.
//
#include "Vehicle.h"

Vehicle::Vehicle(){
    make = "COP3503";
    model = "Rust Bucket";
    year = 1900;
    price = 0;
    miles = 0;
}

Vehicle::Vehicle(string make, string model, int year, float price, int miles){
    this->make = make;
    this->model = model;
    this->year = year;
    this->price = price;
    this->miles = miles;
}

void Vehicle::Display(){
    cout << year << " " << make <<
    " " << model << " $" <<
    price << " " << miles << endl;
}

string Vehicle::GetYearMakeModel() {
    return to_string(year) + " " + make + " " + model;
}

float Vehicle::GetPrice(){
    return price;
}

