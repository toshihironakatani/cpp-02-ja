// コードを入力してください
#include "driver.hpp"

Driver::Driver(const std::string& name, int age): name(name), age(age) {};

std::string Driver::getName() const {
  return name;
}
