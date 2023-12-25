#pragma once
#include <map>
#include <vector>
#include <string>

enum class Rank
{
	A,
	_2,
	_3,
	_4,
	_5,
	_6,
	_7,
	_8,
	_9,
	_10,
	J,
	Q,
	K
};

static const std::vector<Rank> ranks{ Rank::A, Rank::_2, Rank::_3, Rank::_4, Rank::_5, Rank::_6, Rank::_7, Rank::_8, Rank::_9, Rank::_10, Rank::J, Rank::Q, Rank::K };
static const std::map<Rank, int> mp_rank_int{ {Rank::A,1}, {Rank::_2,2}, {Rank::_3,3}, {Rank::_4,4}, {Rank::_5,5}, {Rank::_6,6}, {Rank::_7,7}, {Rank::_8,8},
	{Rank::_9,9}, {Rank::_10,10}, {Rank::J,11}, {Rank::Q,12}, {Rank::K,13} };

static const std::map<Rank, std::string> mp_rank_str{ {Rank::A,"A"}, {Rank::_2,"2"}, {Rank::_3,"3"}, {Rank::_4,"4"}, {Rank::_5,"5"}, {Rank::_6,"6"}, {Rank::_7,"7"}, {Rank::_8,"8"},
	{Rank::_9,"9"}, {Rank::_10,"10"}, {Rank::J,"J"}, {Rank::Q,"Q"}, {Rank::K,"K"}};