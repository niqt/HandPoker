#include "card.h"

Card::Card(string suit, string symbol, int gameValue)
{
    m_suit = suit;
    m_symbol = symbol;
    m_gameValue = gameValue;
}

Card::Card(const Card &other)
{
    m_suit = other.m_suit;
    m_symbol = other.m_symbol;
    m_gameValue = other.m_gameValue;
}

int Card::getGameValue()
{
    return m_gameValue;
}

string Card::getSuit()
{
    return m_suit;
}

string Card::getSymbol()
{
    return m_symbol;
}
