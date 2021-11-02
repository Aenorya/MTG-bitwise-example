#pragma once

namespace ManaType{
//Another way to assign bit masks values
  enum Type{
    White = 1,  //0000 0001
    Blue = 2,   //0000 0010
    Black = 4,  //0000 0100
    Red = 8,    //0000 1000
    Green = 16, //0001 0000
    None = 32   //0010 0000
  };
}