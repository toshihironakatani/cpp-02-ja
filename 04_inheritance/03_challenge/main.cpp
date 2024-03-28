// コードを入力してください
#include "animal.hpp"
#include "dog.hpp"

int main() {
  Dog dog;
  Animal* d {&dog};
  d->makeSound();

  return 0;
}
