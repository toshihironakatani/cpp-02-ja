#pragma once

#include "car.hpp"
#include <vector>

class Garage {
public:
  Garage();
  void addCar(Car* car);
  void removeCar(Car* car);
  int getNumCars() const;

private:
  std::vector<Car*> cars;
};
