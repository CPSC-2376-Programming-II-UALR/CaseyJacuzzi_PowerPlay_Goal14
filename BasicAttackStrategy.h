#ifndef BASICATTACKSTRATEGY_H
#define BASICATTACKSTRATEGY_H


#include "Object.h"
#include "iStrategy.h"
class Player;

class BasicAttackStrategy : public iStrategy
{

public:
	BasicAttackStrategy() = delete;
	BasicAttackStrategy(Player* owner);

	void execute(std::vector <std::unique_ptr<Object>>& objects) override;
};

#endif // !BASICATTACKSTRATEGY_H
