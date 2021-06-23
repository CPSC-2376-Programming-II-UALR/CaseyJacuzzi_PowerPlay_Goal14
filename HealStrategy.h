#ifndef HEALSTRATEGY_H
#define HEALSTRATEGY_H

#include <iostream>
#include "iStrategy.h"
#include "Object.h"
#include "Player.h"

class Player;

class HealStrategy : public iStrategy
{
public:
	HealStrategy() = delete;
	HealStrategy(Player* owner);

	void execute(std::vector <std::unique_ptr<Object>>& objects) override;

	int spellCost{ 2 }; 
};

#endif // !HEALSTRATEGY_H
