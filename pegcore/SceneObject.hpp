#pragma once
#include "Initializable.hpp"
#include "Updatable.hpp"
#include "Renderable.hpp"

namespace peg_core{
  class SceneObject : public Initializable, public Updatable, public Renderable {
  }
}