// コードを入力してください
#include "car.hpp"
#include "driver.hpp"

#include <iostream>

int main() {
  Driver driver("John", 20);
  Car car("Lexus", "CT", 2019, 500'000);
  std::cout << car.getDriver().getName() << std::endl;
  car.setDriver(&driver);
  std::cout << car.getDriver().getName() << std::endl;

  return 0;
};
