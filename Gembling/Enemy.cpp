#include "Enemy_Interface.h"
#include <iostream>

void eraseEnemy(AbstractEnemy* enemy)
{
	delete enemy;
}

Human::Human()
{
	health_ = 16;
	damage_ = 4;
	active_ = true;
}
Human::~Human()
{
	std::cout << "Enemy <HUMAN> has been slain" << std::endl;
}
bool Human::isAlive()
{
	if (this->active_)
	{
		return true;
	}
	else
	{
		eraseEnemy(this);
	}
}


Warrior::Warrior()
{
	health_ = 16;
	damage_ = 4;
	active_ = true;
}
Warrior::~Warrior()
{
	std::cout << "Enemy <WARRIOR> has been slain" << std::endl;
}
bool Warrior::isAlive()
{
	if (this->active_)
	{
		return true;
	}
	else
	{
		eraseEnemy(this);
	}
}


Mage::Mage()
{
	health_ = 16;
	damage_ = 4;
	active_ = true;
}
Mage::~Mage()
{
	std::cout << "Enemy <MAGE> has been slain" << std::endl;
}
bool Mage::isAlive()
{
	if (this->active_)
	{
		return true;
	}
	else
	{
		eraseEnemy(this);
	}
}