
#include "project.hpp"

int main() {
  Person ruffy = Person("Ruffy");
  Person zoro = Person("Zoro");
  Person nami = Person("Nami");

  Project project = Project();
  project.add_team_member(ruffy);
  project.add_team_member(zoro);
  project.add_team_member(nami);

  project.print_team_members();

  return 0;
}
