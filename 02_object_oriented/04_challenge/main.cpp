#include "tire.hpp"
#include "car.hpp"

#include <iostream>

int main() {
  Car car1("Lexus", "NX", 2020, 500'00, 20, "summer");
  std::cout << car1.getTire().get_size() << std::endl;

  return 0;
}
