#include "Game.h"

Game::Game()
{
    vector<string> symbols;
    vector<string> suits;

    symbols.push_back("2");
    symbols.push_back("3");
    symbols.push_back("4");
    symbols.push_back("5");
    symbols.push_back("6");
    symbols.push_back("7");
    symbols.push_back("8");
    symbols.push_back("9");
    symbols.push_back("T");
    symbols.push_back("J");
    symbols.push_back("Q");
    symbols.push_back("K");
    symbols.push_back("A");

    suits.push_back("C");
    suits.push_back("H");
    suits.push_back("S");
    suits.push_back("D");

    m_deck = new Deck(suits, symbols);

}

string Game::play()
{
    string theWinner;
    hand1 = new Hand();
    hand2 = new Hand();

    m_deck->randomize();

    for (int i = 0; i < 5; i++) {
        Card card = m_deck->popCard();
        hand1->addCard(card);
    }

    for (int i = 0; i < 5; i++) {
        Card card = m_deck->popCard();
        hand2->addCard(card);
    }

    int scoreHand1 = hand1->getScore();
    int scoreHand2 = hand2->getScore();

    if (scoreHand1 > scoreHand2)
        theWinner = "Hand1";
    if (scoreHand1 == scoreHand2)
        theWinner = "Deuce";
    else
        theWinner = "Hand2";

    delete hand1;
    delete hand2;

    return theWinner;
}
