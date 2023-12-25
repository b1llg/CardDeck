#include "Card.h"

std::ostream& operator<<(std::ostream& os, Card& card)
{
    os << " " << mp_rank_str.at(card.rank()) << " of " << mp_suit_str.at(card._suit) << std::endl;
    return os;
}

bool& operator<(const Card& lhs, const Card& rhs)
{
    bool test{ mp_rank_int.at(lhs._rank) < mp_rank_int.at(rhs._rank) ? true : false };

    return test;
}

bool& operator>(const Card& lhs, const Card& rhs)
{
    bool test{ mp_rank_int.at(lhs._rank) > mp_rank_int.at(rhs._rank) ? true : false };

    return test;
}

Rank Card::rank()
{
    return this->_rank;
}

Suit Card::suit()
{
    return this->_suit;
}


