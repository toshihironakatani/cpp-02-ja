#include "print.hpp"
#include <iostream>

template <typename T>
void print_elements(T& container) {
  for (const auto& element: container) {
    std::cout << element << std::endl;
  }
}

template void print_elements<std::vector<int>>(std::vector<int>& container);
