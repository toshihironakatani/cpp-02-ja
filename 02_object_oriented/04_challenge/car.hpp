#pragma once
#include <string>
#include "tire.hpp"

class Car {
public:
    Car(std::string make, std::string model, int year, double price, int tire_size, std::string tire_type);

    void setPrice(double price);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;

    void displayInfo() const;
    Tire getTire() const;

private:
    void printPriceChange(double from, double to) const;

    std::string make;
    std::string model;
    int year;
    double price;

    Tire tire;
};
