#include "student.hpp"
#include "teacher.hpp"

#include <iostream>

Student::Student(const std::string& name): name(name) {};

void Student::add_teacher(Teacher* teacher) {
  teachers.push_back(teacher);
}

void Student::printTeachers() {
  for (auto* teacher: teachers) {
    std::cout << teacher->getName() << std::endl;
  }
}

std::string Student::getName() const {
  return name;
}
