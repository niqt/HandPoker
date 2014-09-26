#include "deck.h"

Deck::Deck(vector<string> suits, vector<string> symbols)
{
    for (int i = 0; i < suits.size(); i++) {
        string suit = suits.at(i);
        for (int j = 0; j < symbols.size(); j++) {
            Card newCard(suit, symbols.at(j), j);
            m_cards.push_back(newCard);
        }
    }
}

Card Deck::popCard()
{
    // TODO verify size and exception

    Card card = m_cards.at(m_cards.size() - 1);
    m_cards.pop_back();
    return card;

}
