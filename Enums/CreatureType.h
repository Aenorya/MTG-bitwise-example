#pragma once
namespace CreatureType{
  enum Type{
    Human = 1<<0, //1
    Cat = 1<<1, //2
    Dinosaure = 1<<2, //4
    Dragon = 1<<3, //8
    Soldier = 1<<4, //16
    Elder = 1<<5, //32
    Legendary = 1<<6, //64
    Token = 1<<7 //128
  };
}