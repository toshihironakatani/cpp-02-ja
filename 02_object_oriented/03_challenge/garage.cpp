#include "garage.hpp"
#include <algorithm>

Garage::Garage(){};

void Garage::addCar(Car* car) {
  cars.push_back(car);
}

void Garage::removeCar(Car* car) {
  auto newEnd = std::remove(cars.begin(), cars.end(), car);
  cars.erase(newEnd, cars.end());
}

int Garage::getNumCars() const {
  return cars.size();
}
