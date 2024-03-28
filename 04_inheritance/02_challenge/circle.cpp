// コードを入力してください
#include "circle.hpp"

Circle::Circle(double radius): m_radius(radius){};

double Circle::getArea() {
  return 3.14159 * m_radius * m_radius;
}
