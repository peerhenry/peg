#pragma once

namespace pegcore{
  class Camera : public Updatable
  {
    public:
    virtual void uploadPV() = 0;
  };
};