#pragma once

namespace pegcore{
  class Context{
    public:
    virtual void setup() = 0;
    virtual void start() = 0;
  };
};