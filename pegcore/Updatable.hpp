#pragma once

namespace pegcore{
  class Updatable{
    public:
    virtual void update(double dt) = 0;
  };
};