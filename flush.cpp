#include "flush.h"

Flush::Flush(vector<Card> cards): Rank(cards)
{
}

int Flush::score()
{
    return 100;
}
