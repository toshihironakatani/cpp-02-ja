// コードを入力してください
#include "scene.hpp"

void Scene::add(Drawable* drawable) {
  drawables.push_back(drawable);
}

void Scene::render() const {
  for (const auto drawable: drawables){
    if (drawable != nullptr) {
      drawable->draw();
    }
  }
}
