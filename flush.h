#ifndef FLUSH_H
#define FLUSH_H

/*!
  This class implement the rank flush
  */

#include <vector>
#include "card.h"
#include "rank.h"

using namespace std;

class Flush : public Rank
{
public:
    Flush(vector<Card>);
    int score();
};

#endif // FLUSH_H
