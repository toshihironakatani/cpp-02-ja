#pragma once

#include "teacher.hpp"

#include <vector>
#include <string>

class Teacher;

class Student {
public:
  Student(const std::string& name);
  void add_teacher(Teacher* teacher);
  void printTeachers();
  std::string getName() const;

private:
  std::string name;
  std::vector<Teacher*> teachers;
};
