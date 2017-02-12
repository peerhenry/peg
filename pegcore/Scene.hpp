#pragma once
#include "SceneObject.hpp"

namespace peg_core{
  class Scene : public SceneObject{
    public:
    virtual void addInitializable(Initializable* initializable) = 0;
    virtual void addUpdatable(Updatable* updatable) = 0;
    virtual void addRenderable(Renderable* renderable) = 0;
    virtual void addSceneObject(SceneObject* sceneObject) = 0;
  }
}