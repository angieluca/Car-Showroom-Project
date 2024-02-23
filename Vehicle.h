#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Vehicle{
    string make;
    string model;
    unsigned int year;
    float price;
    unsigned int miles;

public:
    //default constructor
    Vehicle();
    //parameterized constructor
    Vehicle(string make, string model, int year, float price, int miles);

    //print out vehicle's details: 1973 Ford Mustang $9500 113000
    void Display();

    //return YEAR MAKE MODEL string "1970 Ford Mustang"
    string GetYearMakeModel();

    //return the price
    float GetPrice();
};