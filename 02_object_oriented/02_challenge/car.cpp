#include "car.hpp"

#include <iostream>

Car::Car(std::string make, std::string model, int year, double price)
    : make(make), model(model), year(year), price(price) {
    if (price < 0) {
        std::cerr << "Negative Car Price!" << "\n";
    }
    driver = nullptr;
}

void Car::setPrice(double price) {
    printPriceChange(this->price, price);
    this->price = price;
}

std::string Car::getMake() const { return make; }
std::string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getPrice() const { return price; }

void Car::displayInfo() const {
    std::cout << year << " " << make << " " << model << " - $" << price << "\n";
}

void Car::printPriceChange(double from, double to) const {
    std::cout << "Changing price from " << from << " to " << to << "\n";
}

void Car::setDriver(Driver* driver) {
    this->driver = driver;
}

Driver Car::getDriver() const {
    return *driver;
}
