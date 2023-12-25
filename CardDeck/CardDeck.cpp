#include <iostream>
#include "PlayingCards.h"
#include <assert.h>

int main()
{
	DeckInitializer dinit;

	Deck deck = dinit.initDeck();

	std::cout << "======================================================" << std::endl;
	std::cout << "                Displaying cards                      " << std::endl;
	
	std::cout << "Total number of cards: " << deck.nCards() << std::endl;

	std::cout << deck;

	std::cout << "======================================================\n\n\n" << std::endl;

	std::cout << "======================================================" << std::endl;
	std::cout << "               Test Card Mechanics                    " << std::endl;

	Card jackOfHeart = Card{ Rank::J, Suit::Heart };
	Card tenOfSpade = Card{ Rank::_10, Suit::Spade };

	assert(jackOfHeart > tenOfSpade); std::cout << "Test passed: J of heart > 10 of spades" << std::endl;
	assert(jackOfHeart < tenOfSpade); std::cout << "Test passed" << std::endl;

	std::cout << "======================================================" << std::endl;



	return 0;
}