#pragma once
#include <ostream>
#include <vector>
#include "Card.h"

class Deck
{
private:
	int _ncards;
	std::vector<Card> _cards;
	friend class DeckInitializer;
	friend std::ostream& operator<<(std::ostream& os, Deck& deck);

public:
	int nCards();

	Deck() = default;
	~Deck() = default;
};

