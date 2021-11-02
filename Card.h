#pragma once
#include <iostream>
#include <map>
#include "Enums/SuperType.h"
#include "Enums/ManaType.h"
#include "Enums/CardType.h"
#include "Enums/Rarity.h"


class Card{
  private:
  std::string mName;
  std::string mEdition;
  //205.4a An object can have one or more supertypes.
  std::uint8_t mSuperTypes;
  std::uint32_t mAbilities;
  //Here I want a unique mana type for each cost / no multi flagging
  CardType mType;
  Rarity::Type mRarity;
  std::map<ManaType::Type, int> mManaCost;

  std::string mDescription;
  std::string mFlavorText;

  public:
  Card(std::string name = "Generic Card", std::map<ManaType::Type, int> cost= std::map<ManaType::Type, int>{}, std::uint8_t superTypes = 1, std::string description = "Great Card", std::string flavor="", CardType type = CardType::Permanent, Rarity::Type rarity = Rarity::Common);
  ~Card();

  void Play();
  void SetName(std::string name);
  std::string GetName();
  void SetEdition(std::string edition);
  std::string GetEdition();
  std::uint8_t GetSuperTypes(); 
  std::map<ManaType::Type, int> GetManaCost();
  void SetAbilities(std::uint32_t abilities);
  void AddAbilities(std::uint32_t abilities);
  void RemoveAbilities(std::uint32_t abilities);
};