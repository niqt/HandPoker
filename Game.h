#ifndef GAME_H
#define GAME_H

/*!
  This class inialize the game (the deck and the hand).
  The play method run the game and return the winner
  */

#include <string>
#include "deck.h"
#include "hands.h"

using namespace std;

class Game
{
    Deck *m_deck;
    Hand *hand1;
    Hand *hand2;
public:
    Game();
    string play();

};

#endif // GAME_H
