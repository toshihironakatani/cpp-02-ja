#include "print.hpp"
#include <vector>
#include <list>
#include <deque>

int main() {
  std::vector<double> vec{0.0, 0.1, 0.2};
  print_elements<std::vector<double>>(vec);

  std::list<double> l{0.3, 0.4, 0.5};
  print_elements<std::list<double>>(l);

  std::deque<double> d{0.7, 0.8, 0.9};
  print_elements<std::deque<double>>(d);

  return 0;
}
