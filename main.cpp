#include <iostream>
#include <vector>
#include "CreatureCard.h"
#include "Utils.h"
#include "Enums/CreatureAbility.h"

using namespace std;


int main() {
  /* CREATING DINO CAT */
  uint8_t dinoCatFlag;
  dinoCatFlag = CreatureType::Cat | CreatureType::Dinosaure;
  //Oups, forgot to flag for token
  dinoCatFlag |= CreatureType::Token;

  CreatureCard dCatCard = CreatureCard("Dinosaur Cat", dinoCatFlag);
  //dCatCard.SetType(dinoCatFlag);
  dCatCard.SetMaxAttack(2);
  dCatCard.SetMaxLife(2);
  DisplayCreatureTypes(dCatCard);

/* CREATING REGAL CARACAL */
  vector<CreatureCard> myBoardSide;
  //Play cards… 
  myBoardSide.push_back(dCatCard);
  dCatCard.Play();
  //string name, map<ManaType, int> cost, uint8_t superTypes, string description, string flavor, CardType type, Rarity rarity, int attack, int life

  CreatureCard regalCaracal = CreatureCard("Regal Caracal", CreatureType::Cat,
	map<ManaType::Type, int>{{ManaType::None, 3}, {ManaType::White, 2}},
	SuperType::Basic,"","",
	CardType::Permanent,
	Rarity::Common,
	3,3);

  regalCaracal.Play();
  //regalCaracal.SetType(CreatureType::Cat);
  for(int c = 0; c<myBoardSide.size(); c++){
      if(myBoardSide[c].GetType()& CreatureType::Cat){
        myBoardSide[c].ChangeMaxAttack(1);
        myBoardSide[c].ChangeMaxLife(1);
        myBoardSide[c].AddAbilities(CreatureAbility::LifeLink);
      }
  }
  
  CreatureCard whiteCatOne = CreatureCard("White Cat");
  whiteCatOne.SetMaxAttack(1);
  whiteCatOne.SetMaxLife(1);
  whiteCatOne.SetType(CreatureType::Token | CreatureType::Cat);
  whiteCatOne.AddAbilities(CreatureAbility::LifeLink);
  CreatureCard whiteCatTwo = CreatureCard(whiteCatOne);
  //Add the 2 new cards to the board
  myBoardSide.push_back(regalCaracal);
  
  myBoardSide.push_back(whiteCatOne);
  whiteCatOne.Play();
  myBoardSide.push_back(whiteCatTwo);
  whiteCatTwo.Play();

  CreatureCard chromium = CreatureCard("Chromium, the Mutable",(CreatureType::Elder|CreatureType::Dragon|CreatureType::Legendary),
	map<ManaType::Type, int>{{ManaType::None, 4}, {ManaType::White, 1}, {ManaType::Blue, 1}, {ManaType::Black, 1}},
	SuperType::Legendary, "", "", 
	CardType::Permanent, 
	Rarity::MythicRare, 
	7, 37);
  //chromium.SetType(CreatureType::Elder|CreatureType::Dragon|CreatureType::Legendary);
  chromium.SetAbilities(CreatureAbility::Flying | CreatureAbility::Flash);
  chromium.Play();
  //… … … 
  //Discard a card
  cout<<"A card has been discarded";
  //Flip the Elder and the Dragon flags
  chromium.RemoveCreatureType(CreatureType::Elder|CreatureType::Dragon);
  chromium.AddCreatureType(CreatureType::Human);
  chromium.SetMaxAttack(1);
  chromium.SetMaxLife(1);
  chromium.SetAbilities(CreatureAbility::HexProof);//Sets HexProof as only ability


} 