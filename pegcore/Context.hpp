#pragma once

namespace peg_core{
  class Context{
    public:
    virtual void setup() = 0;
    virtual void start() = 0;
  }
}