// コードを入力してください
#include "scene.hpp"
#include "circle.hpp"
#include "square.hpp"

int main() {
  Circle circle;
  Square square;
  Scene scene;

  scene.add(&circle);
  scene.add(&square);

  scene.render();

  return 0;
}
