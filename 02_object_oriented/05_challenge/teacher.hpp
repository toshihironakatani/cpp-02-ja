#pragma once

#include "student.hpp"

#include <vector>
#include <string>

class Student;

class Teacher {
public:
  Teacher(const std::string& name);
  void add_student(Student* student);
  std::string getName() const;
  void printStudents() const;

private:
  std::string name;
  std::vector<Student*> students;
};
