#pragma once

class Player
{
private:
	unsigned lives;
	unsigned money;

public:
	unsigned getMoney() const { return money; }
	unsigned getLives() const { return lives; }
	void looseLife();
	void pay(unsigned cost);

	Player() {}
	~Player() {}
};