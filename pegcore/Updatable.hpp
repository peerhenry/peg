#pragma once

namespace peg_core{
  class Updatable{
    public:
    virtual void update(double dt) = 0;
  };
};