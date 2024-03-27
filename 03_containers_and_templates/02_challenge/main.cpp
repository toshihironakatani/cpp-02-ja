// コードを入力してください
#include "stack.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
  Stack<std::vector<int>, int> stack_vec;
  std::cout << "==push==" << std::endl;
  stack_vec.push(1);
  stack_vec.push(2);
  stack_vec.push(3);
  stack_vec.show();

  std::cout << "==pop==" << std::endl;
  stack_vec.pop();
  stack_vec.show();

  std::cout << "==top==" << std::endl;
  std::cout << stack_vec.top() << std::endl;

  Stack<std::vector<int>, int> stack_list;
  std::cout << "==push==" << std::endl;
  stack_list.push(1);
  stack_list.push(2);
  stack_list.push(3);
  stack_list.show();

  std::cout << "==pop==" << std::endl;
  stack_list.pop();
  stack_list.show();

  std::cout << "==top==" << std::endl;
  std::cout << stack_list.top() << std::endl;

  return 0;

}
