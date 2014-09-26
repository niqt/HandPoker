#include "hands.h"
#include "flush.h"

Hand::Hand()
{

}

void Hand::addCard(Card card)
{
    if (m_cards.size() < 5)
        m_cards.push_back(card);
}

int Hand::getScore()
{
    // TODO create all ranks
    /* The logic is push the rank from highest to lower, then i search first score != 0 */

    Flush *flush = new Flush(m_cards);

    m_ranks.push_back(flush);

    if (m_cards.size() != 5)
        return 0;
    else {
        int score = 0;
        int i = 0;
        while (score == 0 && i < m_ranks.size()) {
            score = m_ranks.at(i)->score();
            i++;
        }
        return  score;
    }

}
