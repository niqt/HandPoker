#ifndef DECK_H
#define DECK_H

/*!
  This is a Deck, a set of cards
  randomize method shuffle the cards in the deck
  */


#include <vector>
#include "card.h"

using namespace std;

class Deck
{
    vector<Card> m_cards;
public:
    Deck(vector<string> suits, vector<string> symbols);
    void randomize() {;}
    Card popCard();

};

#endif // DECK_H
