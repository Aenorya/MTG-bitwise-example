#pragma once
#include "CreatureCard.h"

using namespace std;

void DisplayCreatureTypes(CreatureCard card){
  uint8_t type = card.GetType();
  cout<<card.GetName()<<" is :\n";
  if(type & CreatureType::Human){
    cout<<" * a Human\n";
  }
  if(type & CreatureType::Cat){
    cout<<" * a Cat\n";
  }
  if(type & CreatureType::Dinosaure){
    cout<<" * a Dino\n";
  }
  if(type & CreatureType::Dragon){
    cout<<" * a Dragon\n";
  }
  if(type & CreatureType::Soldier){
    cout<<" * a Soldier\n";
  }
  if(type & CreatureType::Elder){
    cout<<" * an Elder\n";
  }
  if(type & CreatureType::Legendary){
    cout<<" * Legendary\n";
  }
  if(type & CreatureType::Token){
    cout<<" * a Token\n";
  }
}