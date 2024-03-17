#include "garage.hpp"
#include "car.hpp"
#include <iostream>

int main() {
  Garage garage;
  Car car1("Lexus", "NX", 2020, 500'00);
  Car car2("Lexus", "RX", 2021, 600'00);
  Car car3("Lexus", "GX", 2022, 700'00);

  garage.addCar(&car1);
  garage.addCar(&car2);
  garage.addCar(&car3);

  std::cout << garage.getNumCars() << std::endl;

  garage.removeCar(&car2);
  std::cout << garage.getNumCars() << std::endl;

}
