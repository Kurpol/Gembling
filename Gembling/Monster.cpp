#include "Monster_Interface.h"
#include <iostream>

void eraseMonster(AbstractMonster* monster)
{
	delete monster;
}

TinyZombee::TinyZombee()
{
	health_ = 16;
	damage_ = 4;
	active_ = true;
}
TinyZombee::~TinyZombee()
{
	std::cout << "Enemy <HUMAN> has been slain" << std::endl;
}
bool TinyZombee::isAlive()
{
	if (this->active_)
	{
		return true;
	}
	else
	{
		eraseMonster(this);
	}
}

AngryZombee::AngryZombee()
{
	health_ = 16;
	damage_ = 4;
	active_ = true;
}
AngryZombee::~AngryZombee()
{
	std::cout << "Enemy <WARRIOR> has been slain" << std::endl;
}
bool AngryZombee::isAlive()
{
	if (this->active_)
	{
		return true;
	}
	else
	{
		eraseMonster(this);
	}
}

StrongZombee::StrongZombee()
{
	health_ = 16;
	damage_ = 4;
	active_ = true;
}
StrongZombee::~StrongZombee()
{
	std::cout << "Enemy <MAGE> has been slain" << std::endl;
}
bool StrongZombee::isAlive()
{
	if (this->active_)
	{
		return true;
	}
	else
	{
		eraseMonster(this);
	}
}
