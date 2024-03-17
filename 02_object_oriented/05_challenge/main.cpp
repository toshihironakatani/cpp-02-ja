#include "school.hpp"
#include "teacher.hpp"
#include "student.hpp"

#include <iostream>

int main() {
  School school;

  Teacher teacher1("John");
  Teacher teacher2("Mickel");
  Teacher teacher3("Risa");

  school.hireTeacher(&teacher1);
  school.hireTeacher(&teacher2);
  school.hireTeacher(&teacher3);

  Student student1("Chen");
  Student student2("Kim");
  Student student3("Suzuki");

  school.enrollStudent(&student1);
  school.enrollStudent(&student2);
  school.enrollStudent(&student3);

  school.assignStudent(&student1, &teacher1);
  school.assignStudent(&student2, &teacher1);
  school.assignStudent(&student3, &teacher1);

  std::cout << "teachers: " << std::endl;
  student1.printTeachers();

  std::cout << "students: " << std::endl;
  teacher1.printStudents();

  return 0;
}
