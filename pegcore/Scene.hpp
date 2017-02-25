#pragma once
#include "SceneObject.hpp"

namespace pegcore{
  class Scene : public Updatable, public Renderable{
    public:
    virtual void addUpdatable(Updatable* updatable) = 0;
    virtual void addRenderable(Renderable* renderable) = 0;
    virtual void addSceneObject(SceneObject* sceneObject) = 0;
  };
};