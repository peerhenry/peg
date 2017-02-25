#pragma once

#include <glm/glm.hpp>
using glm::vec2;
using glm::vec3;
using glm::vec4;
using glm::mat4;
using glm::mat3;

#include <stdexcept>

namespace peg_glsl{

  enum GlslShaderType {
    VERTEX = GL_VERTEX_SHADER, 
    FRAGMENT = GL_FRAGMENT_SHADER, 
    GEOMETRY = GL_GEOMETRY_SHADER,
    TESS_CONTROL = GL_TESS_CONTROL_SHADER, 
    TESS_EVALUATION = GL_TESS_EVALUATION_SHADER, 
    COMPUTE = GL_COMPUTE_SHADER
  };

  class GLSLProgramException : public std::runtime_error {
  public:
    GLSLProgramException(const string & msg) :
      std::runtime_error(msg) { }
  };

  class IGlslProgram
  {
    public:
      virtual void   compileShader( const char *fileName ) throw (GLSLProgramException) = 0;
      virtual void   compileShader( const char * fileName, GlslShaderType type ) throw (GLSLProgramException) = 0;
      virtual void   compileShader( const string & source, GlslShaderType type, const char *fileName = NULL ) throw (GLSLProgramException) = 0;

      virtual void   link() throw (GLSLProgramException) = 0;
      virtual void   validate() throw(GLSLProgramException) = 0;
      virtual void   use() throw (GLSLProgramException) = 0;

      virtual int    getHandle() = 0;
      virtual bool   isLinked() = 0;

      virtual void   bindAttribLocation( GLuint location, const char * name) = 0;
      virtual void   bindFragDataLocation( GLuint location, const char * name ) = 0;

      virtual void   setUniform( const char *name, float x, float y, float z) = 0;
      virtual void   setUniform( const char *name, const vec2 & v) = 0;
      virtual void   setUniform( const char *name, const vec3 & v) = 0;
      virtual void   setUniform( const char *name, const vec4 & v) = 0;
      virtual void   setUniform( const char *name, const mat4 & m) = 0;
      virtual void   setUniform( const char *name, const mat3 & m) = 0;
      virtual void   setUniform( const char *name, float val ) = 0;
      virtual void   setUniform( const char *name, int val ) = 0;
      virtual void   setUniform( const char *name, bool val ) = 0;
      virtual void   setUniform( const char *name, GLuint val ) = 0;

      virtual void   printActiveUniforms() = 0;
      virtual void   printActiveUniformBlocks() = 0;
      virtual void   printActiveAttribs() = 0;

      virtual const char * getTypeString( GLenum type ) = 0;
  };
};