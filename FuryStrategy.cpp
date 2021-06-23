#include "FuryStrategy.h"

FuryStrategy::FuryStrategy(Player* owner)
	:iStrategy(owner, 'f',"(f)ury")
{
}

void FuryStrategy::execute(std::vector<std::unique_ptr<Object>>& objects)
{
	std::cout << "Your fury blows through the front lines of the enemies!" << std::endl;
	for (int i{ std::min(2, (int)objects.size() - 1) }; i > 0; i--)
	{
		// Attacks the monster twice, then set's it to scared
		objects[i]->defend(owner->attack());
		objects[i]->defend(owner->attack());
		objects[i]->scare();		
	}

	std::cout << "The fury has left you weakend, your strength drops " << owner->getStrength() << " -->";
	owner->weaken(1);
	std::cout << owner->getStrength() << std::endl;
	system("PAUSE");
	system("CLS");
}
