#pragma once
#include "Initializable.hpp"
#include "Updatable.hpp"
#include "Renderable.hpp"

namespace pegcore{
  class SceneObject : public Initializable, public Updatable, public Renderable {
  };
};