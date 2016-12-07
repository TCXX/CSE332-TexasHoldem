/*
FiveCardDraw.h created by Cindy Le, Adrien Xie, and Yanni Yang
*/

#pragma once
#ifndef SevenCardStud_H_
#define SevenCardStud_H_


#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Hand.h"
#include "PokerGame.h"
#include <iostream>
#include <sstream>
#include <vector> 
#include <string>

using namespace std;

class SevenCardStud : public PokerGame {
	virtual int before_round();
	virtual int round();

public:
	SevenCardStud();

};

#endif  //SevenCardStud_H_