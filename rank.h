#ifndef RANK_H
#define RANK_H

/*!
  It's a interface for all ranks class.
  Every score() method must to return 0 if not veify the rank otherwise the real score
  */


#include "card.h"
#include <vector>

using namespace std;

class Rank
{
    vector<Card> m_cards;
public:
    Rank(vector<Card> card);
    virtual int score() = 0;
};

#endif // RANK_H
