#include "Deck.h"

std::ostream& operator<<(std::ostream& os, Deck& deck)
{
    for (Card card : deck._cards)
    {
        os << card;
    }
    return os;
}

int Deck::nCards()
{
    return this->_ncards;
}
