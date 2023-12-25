#pragma once
#include <vector>
#include <map>
#include <string>

enum class Suit
{
	Spade,
	Clover,
	Heart,
	Diamond
};

static const std::vector<Suit> suits{ Suit::Spade, Suit::Clover, Suit::Heart, Suit::Diamond };
static const std::map<Suit, int> mp_suit_int{ {Suit::Spade,1}, {Suit::Clover,2}, {Suit::Heart,3}, {Suit::Diamond,4} };
static const std::map < Suit, std::string > mp_suit_str{ {Suit::Spade,"Spade"}, {Suit::Clover,"Clover"}, {Suit::Heart,"Heart"}, {Suit::Diamond,"Diamond"}};