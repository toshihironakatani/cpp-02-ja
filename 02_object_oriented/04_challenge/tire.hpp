#pragma once
#include <string>

class Tire {
public:
  Tire(int size, std::string type);
  int get_size();

private:
  int size;
  std::string type;
};
