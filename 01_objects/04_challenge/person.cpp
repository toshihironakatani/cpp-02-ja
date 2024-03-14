#include "person.hpp"

Person::Person(std::string name): name(name) {};
std::string Person::get_name() const {
  return name;
}
