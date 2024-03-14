#pragma once

#include "team.hpp"
#include "person.hpp"

class Project {
public:
  Project();
  void add_team_member(const Person& person);
  void print_team_members() const;

private:
  Team team;
};
