#pragma once
using glm::vec2;
using glm::vec3;
using glm::vec4;
using glm::mat4;
using glm::mat3;
namespace peg_glsl{
	class PvmProgram
	{
	  public:
	  virtual void setModelMatrix(mat4 model) = 0;
	  virtual void setProjectionView(mat4 pv) = 0;
  };
};