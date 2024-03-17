#include "teacher.hpp"
#include "student.hpp"

#include <iostream>

Teacher::Teacher(const std::string& name): name(name) {};

void Teacher::add_student(Student* student) {
  students.push_back(student);
}

std::string Teacher::getName() const {
  return name;
}

void Teacher::printStudents() const {
  for (auto* student: students) {
    std::cout << student->getName() << std::endl;
  }
}
