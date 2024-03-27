#include <iostream>
#include <chrono>
#include <vector>
#include <list>
#include <deque>


template <typename T, typename U>
class Stack {
public:
  void push(U element) {
    stack.push_back(element);
  }
  void pop() {
    if (stack.size() != 0){
      stack.pop_back();
    }
  }
private:
  T stack;
};

template<typename Stack>
std::chrono::microseconds calc_time(Stack stack) {
  int input = 10;

  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

  for (size_t i = 0; i < 100000; ++i) {
    stack.push(input);
    stack.pop();
  }

  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

  return std::chrono::duration_cast<std::chrono::microseconds>(end - start);
}


int main() {
  std::cout << "elapsed time" << std::endl;

  Stack<std::vector<int>, int> stack_vector;
  std::chrono::microseconds elapsed_time_vector = calc_time<Stack<std::vector<int>, int>>(stack_vector);
  std::cout << "  vector: " << elapsed_time_vector.count() << std::endl;


  Stack<std::list<int>, int> stack_list;
  std::chrono::microseconds elapsed_time_list = calc_time<Stack<std::list<int>, int>>(stack_list);
  std::cout << "  list: " << elapsed_time_list.count() << std::endl;

  Stack<std::deque<int>, int> stack_deque;
  std::chrono::microseconds elapsed_time_deque = calc_time<Stack<std::deque<int>, int>>(stack_deque);
  std::cout << "  deque: " << elapsed_time_deque.count() << std::endl;

  return 0;
}
