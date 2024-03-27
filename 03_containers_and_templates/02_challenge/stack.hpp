// コードを入力してください
#include <iostream>

template <typename T, typename U>
class Stack {
public:
  Stack(){};
  void push(const U& value) {
    elements.push_back(value);
  };
  void pop(){
    if(!is_empty()){
      elements.pop_back();
    }
  };
  U top() const {
    if(!is_empty()) {
      return elements.back();
    }
    return 0;
  };
  bool is_empty() const{
    return elements.empty();
  };
  void show() const {
    for (auto& element: elements) {
      std::cout << element << std::endl;
    }
  };
private:
  T elements;
};
