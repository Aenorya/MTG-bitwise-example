#include <iostream>
#include "CreatureCard.h"  
  
using namespace std;

CreatureCard::CreatureCard(string name, map<ManaType::Type, int> cost, uint8_t superTypes, string description, string flavor, CardType type, Rarity::Type rarity, int attack, int life):Card(name, cost, superTypes, description, flavor, type, rarity){
  mMaxAttack = attack;
  mMaxLife = life;
  mLife = mMaxLife;  //Life at creation is maximum

}
CreatureCard::~CreatureCard(){

}
void CreatureCard::SetType(std::uint8_t type){
  mCreatureType = type;
}
std::uint8_t CreatureCard::GetType(){
  return mCreatureType;
}
void CreatureCard::ChangeMaxAttack(int points){
  mMaxAttack += points;
  cout<<points<<" added to max attack for "<<GetName()<<" : new total is "<< mMaxAttack<<endl;
}
void CreatureCard::ChangeMaxLife(int points){
  mMaxLife += points;
  cout<<points<<" added to max life for "<<GetName()<<" : new total is "<< mMaxLife<<endl;
}
void CreatureCard::SetMaxAttack(int attack){
  mMaxAttack = attack;
}
void CreatureCard::SetMaxLife(int life){
  mMaxLife = life;
}

void CreatureCard::AddCreatureType(uint8_t type){
  mCreatureType |=type;
}
void CreatureCard::RemoveCreatureType(uint8_t type){
  mCreatureType ^= type;
}

