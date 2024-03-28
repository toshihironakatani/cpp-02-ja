// コードを入力してください
#include <iostream>
#include "shape.hpp"
#include "circle.hpp"

int main() {
  Circle circle(3);
  Shape* shape { &circle };

  std::cout << shape->getArea() << std::endl;
  return 0;
}
