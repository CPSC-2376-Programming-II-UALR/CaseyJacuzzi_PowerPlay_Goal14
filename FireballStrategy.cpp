
#include "FireballStrategy.h"

FireballStrategy::FireballStrategy(Player* owner)
	:iStrategy(owner, 'b', "(b)fireball")
{
}

void FireballStrategy::execute(std::vector<std::unique_ptr<Object>>& objects)
{
	std::cout << "Your fireball spell roasts the front lines of the enemies!" << std::endl;
	for (int i{ std::min(3, (int)objects.size() - 1) }; i > 0; i--)
	{
	
		objects[i]->defend(owner->attack());
		
	}

	system("PAUSE");
	system("CLS");

}
