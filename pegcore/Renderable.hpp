#pragma once

namespace pegcore{
  class Renderable{
    public:
    virtual void render() const = 0;
  };
};