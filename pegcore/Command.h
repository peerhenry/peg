#pragma once

namespace pegcore{

  const short PEG_DOWN = 1;
  const short PEG_PRESS = 2;
  const short PEG_RELEASE = 3;

  typedef void(*InputCallback)(void);

  struct command{
    short type;
    InputCallback pressFunc;
    InputCallback releaseFunc;

    command(){
      type = 0;
      pressFunc = 0;
      releaseFunc = 0;
    }

    command(InputCallback pressFunc, bool isRelease = false){
      this->pressFunc = pressFunc;
      type = PEG_PRESS;
      if(isRelease) type = PEG_RELEASE;
    }

    command(InputCallback pressFunc, InputCallback releaseFunc){
      this->pressFunc = pressFunc;
      this->releaseFunc = releaseFunc;
      type = PEG_DOWN;
    }
  };

  typedef void(*CursorCallback)(double, double, double, double); // posx, posy, dx, dy
}