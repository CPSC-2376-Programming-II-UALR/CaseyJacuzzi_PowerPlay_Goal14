#include "FearSpellStrategy.h"

FearSpellStrategy::FearSpellStrategy(Player* owner)
	:iStrategy(owner, 's', "(s)FearSpell")
{
}

void FearSpellStrategy::execute(std::vector<std::unique_ptr<Object>>& objects)
{
	std::bernoulli_distribution causeFear(.5);
	if (causeFear(Object::engine))
	{
		std::cout << "Your fear spell is cast over the front lines of the enemies!" << std::endl;

		for (int i{ (int)objects.size() - 1 }; i > 0; i--)
		{
			objects[i]->scare();
		}
		
	}
	else
	{
		std::cout << "The fear spell did not work..." << std::endl;
	}

}
