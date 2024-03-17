#pragma once

#include "student.hpp"
#include "teacher.hpp"

#include <vector>

class School {
public:
  School();
  void enrollStudent(Student* student);
  void hireTeacher(Teacher* teacher);
  void assignStudent(Student* student, Teacher* teacher);

private:
  bool hasTeacher(Teacher* teacher);
  bool hasStudnet(Student* student);
  std::vector<Teacher*> teachers;
  std::vector<Student*> students;
};
