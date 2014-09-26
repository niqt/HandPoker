#ifndef HANDS_H
#define HANDS_H

/*!
  This Class is the hand. Five cards and call the class to evaluet the rank
  */

#include "card.h"
#include <vector>
#include "rank.h"

using namespace std;

class Hand
{
    vector<Card> m_cards;
    vector<Rank *> m_ranks;
public:
    Hand();
    void addCard(Card card);
    int getScore();
};

#endif // HANDS_H
