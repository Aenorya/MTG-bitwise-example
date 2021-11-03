#pragma once
#include "Card.h"
#include "Enums/CreatureType.h"


class CreatureCard: public Card{
  private:
  std::uint8_t mCreatureType;
  int mMaxAttack;
  int mMaxLife;
  int mLife;
  public:
  CreatureCard(std::string name = "Kreatur", uint8_t flags = 0, std::map<ManaType::Type, int> cost= std::map<ManaType::Type, int>{}, std::uint8_t superTypes = 1, std::string description = "Great Card", std::string flavor="", CardType type = CardType::Permanent, Rarity::Type rarity = Rarity::Common, int attack=0, int life=1);
  ~CreatureCard();
  void SetType(std::uint8_t type);
  std::uint8_t GetType();
  void ChangeMaxAttack(int points);
  void ChangeMaxLife(int points);
  void SetMaxAttack(int attack);
  void SetMaxLife(int life);
  void AddCreatureType(uint8_t type);
  void RemoveCreatureType(uint8_t type);
};