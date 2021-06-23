#include <iostream>
#include "Player.h"
#include "Object.h"
#include "BasicAttackStrategy.h"

BasicAttackStrategy::BasicAttackStrategy(Player* owner)
	:iStrategy(owner, 'a', "(a)ttack")
{
}

void BasicAttackStrategy::execute(std::vector<std::unique_ptr<Object>>& objects)
{
	int monsterNum{ 1 };
	if (objects.size() > 2)
	{
		std::cout << "Which monster: ";
		std::cin >> monsterNum;
	}
	if (monsterNum > 0 && monsterNum <= objects.size() - 1)
	{
		Object::nameOnly = true;
		system("CLS");
		std::cout << "******************** FIGHT ********************" << std::endl;
		std::cout << *owner << " Attacks ";
		std::cout << *objects.at(monsterNum) << "!!\n";

		objects[monsterNum]->defend(owner->attack());
	}
}
