// コードを入力してください
#pragma once
#include <iostream>
#include <vector>

template <typename T>
void print_elements(T& container) {
  for (const auto& element: container) {
    std::cout << element << std::endl;
  }
}
