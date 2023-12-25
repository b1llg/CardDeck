#pragma once
#include "Deck.h"
#include "Card.h"
#include "Rank.h"
#include "Suit.h"


class DeckInitializer
{
private:
	Deck _deck;

public:
	DeckInitializer() = default;
	~DeckInitializer() = default;

	Deck initDeck();
};

