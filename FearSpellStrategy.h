#ifndef FEARSPELLSTRATEGY_H
#define FEARSPELLSTRATEGY_H

#include <iostream>

#include "Player.h"
#include "Object.h"
#include "iStrategy.h"
class Player;

class FearSpellStrategy : public iStrategy
{

public:
	FearSpellStrategy() = delete;
	FearSpellStrategy(Player* owner);

	void execute(std::vector <std::unique_ptr<Object>>& objects) override;

	int spellCost{ 3 };
};

#endif // !FEARSPELLSTRATEGY_H
