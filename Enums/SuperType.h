#pragma once
//205.4a The supertypes are basic, legendary, ongoing, snow, and world.

// See here : https://mtg.fandom.com/wiki/Supertype
namespace SuperType{
  enum Type{
    Basic = 1<<0,
    Legendary = 1<<1,
    Ongoing = 1<<2,
    Snow = 1<<3,
    World = 1<<4
  };
}