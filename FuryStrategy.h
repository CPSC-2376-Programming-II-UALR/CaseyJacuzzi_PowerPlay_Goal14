#ifndef FURYSTRATEGY_H
#define FURYSTRATEGY_H

#include <iostream>
#include "iStrategy.h"
#include "Object.h"
#include "Player.h"

class Player;

class FuryStrategy : public iStrategy
{
public:
	FuryStrategy() = delete;
	FuryStrategy(Player* owner);

	void execute(std::vector <std::unique_ptr<Object>>& objects) override;

	int spellCost{ 2 };
};


#endif // !FURYSTRATEGY_H
