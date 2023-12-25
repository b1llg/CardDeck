#pragma once
#include <ostream>
#include <string>
#include "Rank.h"
#include "Suit.h"

class Card
{
private:
	Rank _rank;
	Suit _suit;
public:
	Rank rank();
	Suit suit();

	Card() = default;
	Card(Rank rank, Suit suit) : _rank(rank), _suit(suit) {}
	friend std::ostream& operator<<(std::ostream& os, Card& card);
	friend bool& operator<(const Card& lhs, const Card& rhs);
	friend bool& operator>(const Card& lhs, const Card& rhs);
	~Card() = default;
};

