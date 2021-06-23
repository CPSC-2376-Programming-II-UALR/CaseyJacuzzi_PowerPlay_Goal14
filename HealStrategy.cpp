#include "HealStrategy.h"

HealStrategy::HealStrategy(Player* owner)
	:iStrategy(owner, 'h', "(h)eal")
{
}

void HealStrategy::execute(std::vector<std::unique_ptr<Object>>& objects)
{
	Object::nameOnly = true;
	if (owner->cast(spellCost))
	{
		std::normal_distribution<double> randomHeal(owner->getStrength() * 2.0, 20.0 * (1.0 / owner->getLevel()));
		int amountHealed{ std::max(1, (int)randomHeal(Object::engine)) };
		owner->heal(amountHealed);
	}
	else
	{
		std::cout << "Not enough SP!!!" << std::endl;
	}
}
