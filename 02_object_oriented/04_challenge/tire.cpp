#include "tire.hpp"

#include <iostream>

Tire::Tire(int size, std::string type): size(size), type(type) {
  std::cout << "Tire has been created." << std::endl;
}

int Tire::get_size() {
  return size;
}
