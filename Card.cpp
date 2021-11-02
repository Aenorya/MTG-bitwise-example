
#include "Card.h"

using namespace std;

Card::Card(string name, map<ManaType::Type, int> cost, uint8_t superTypes, string description, string flavor, CardType type, Rarity::Type rarity){
 mName = name;
 mManaCost = cost;
 mSuperTypes = superTypes;
 mDescription = description;
 mFlavorText = flavor;
 mType = type;
 mRarity = rarity;
}

Card::~Card(){
}

void Card::Play(){
  cout<<mName<<" I choose you !\n";
}

void Card::SetName(std::string name){
  mName = name;
}
std::string Card::GetName(){
  return mName;
}
void Card::SetEdition(std::string edition){
  mEdition = edition;
}
std::string Card::GetEdition(){
  return mEdition==""? "M21": mEdition;
}
std::uint8_t Card::GetSuperTypes(){
  return mSuperTypes;
}
std::map<ManaType::Type, int> Card::GetManaCost(){
  return mManaCost;
}

void Card::SetAbilities(std::uint32_t abilities){
  mAbilities = abilities;
}
void Card::AddAbilities(std::uint32_t abilities){
  mAbilities |= abilities;
}
void Card::RemoveAbilities(std::uint32_t abilities){
  if(!(mAbilities & abilities)){
    cout<<"Abilities to remove were not on this card";
  }else{
    mAbilities ^= abilities;
  }
}