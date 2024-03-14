#include <vector>
#include "team.hpp"

Team::Team() {};

void Team::add_member(const Person& person) {
  members.push_back(person);
};

std::vector<Person> Team::get_members() const {
  return members;
};
