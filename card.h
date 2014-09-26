#ifndef CARD_H
#define CARD_H

/*!
  This is the Card. Every card has a suit, a symbol and a value
  */

#include <string>

using namespace std;

class Card
{
private:
    string m_suit;
    string m_symbol;
    int m_gameValue;
public:
    Card(string suit, string symbol, int gameValue);
    Card(const Card &other);
    string getSuit();
    string getSymbol();
    int getGameValue();
};

#endif // CARD_H
