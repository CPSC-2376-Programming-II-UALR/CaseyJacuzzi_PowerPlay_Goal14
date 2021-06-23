#ifndef PLAYER_H
#define PLAYER_H

#include <memory>
#include <set>
#include "Object.h"
#include "Item.h"
#include "iStrategy.h"
class Player :
	public Object
{
public:
	Player();

	Player(const Player& src) noexcept;
	Player(Player&& src) noexcept;

	Player& operator=(const Player& src) noexcept;
	Player& operator=(Player&& src) noexcept;

	void levelUp();
	void update(std::vector<std::unique_ptr<Object>>& objects) override;

	int getLevel() const;
	int getStrength() const;
	bool cast(int cost);
	


	int attack() const override;
	void defend(int damage) override;
	void print(std::ostream& o) const override;
	



private:
	std::map<Item::Type, std::unique_ptr<Item>> inventory;
	std::set<std::unique_ptr<iStrategy>> abilities;
	int SP{ 0 };
};

std::ostream& operator<< (std::ostream& o, const std::map<Item::Type, std::unique_ptr<Item>>& src);
#endif // !PLAYER_H