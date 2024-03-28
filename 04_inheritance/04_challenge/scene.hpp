// コードを入力してください
#include "circle.hpp"
#include "square.hpp"
#include <vector>

class Scene {
public:
  void render() const;
  void add(Drawable* drawable);
private:
  std::vector<Drawable*> drawables;
};
