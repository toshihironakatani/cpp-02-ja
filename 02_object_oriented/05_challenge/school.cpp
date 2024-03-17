#include "school.hpp"

#include <cassert>

School::School(){};

void School::enrollStudent(Student* student) {
  students.push_back(student);
}

void School::hireTeacher(Teacher* teacher) {
  teachers.push_back(teacher);
}

void School::assignStudent(Student* student, Teacher* teacher) {
  assert(hasStudnet(student) && hasTeacher(teacher));
  student->add_teacher(teacher);
  teacher->add_student(student);
}

bool School::hasStudnet(Student* target) {
  for (auto student: students) {
    if(student == target) {
      return true;
    }
  }
  return false;
}

bool School::hasTeacher(Teacher* target) {
  for (auto teacher: teachers) {
    if(teacher == target) {
      return true;
    }
  }
  return false;
}
