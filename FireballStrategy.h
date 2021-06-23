#ifndef FIREBALLSTRATEGY_H
#define FIREBALLSTRATEGY_H

#include <iostream>

#include "Player.h"
#include "Object.h"
#include "iStrategy.h"
class Player;

class FireballStrategy : public iStrategy
{

public:
	FireballStrategy() = delete;
	FireballStrategy(Player* owner);

	void execute(std::vector <std::unique_ptr<Object>>& objects) override;

	int spellCost{ 5 };
};

#endif // FIREBALLSTRATEGY_H
