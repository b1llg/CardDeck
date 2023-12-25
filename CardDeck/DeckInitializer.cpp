#include "DeckInitializer.h"

Deck DeckInitializer::initDeck()
{
	for (Rank rank : ranks)
	{
		for (Suit suit : suits)
		{
			Card* card = new Card{ rank, suit };
			
			this->_deck._cards.push_back(*card);

			this->_deck._ncards++;

			delete card;
		}
	}

	return this->_deck;

}
