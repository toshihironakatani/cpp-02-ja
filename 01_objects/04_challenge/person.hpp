#pragma once

#include <string>

class Person {
public:
  Person(std::string name);
  std::string get_name() const;

private:
  std::string name;
};
