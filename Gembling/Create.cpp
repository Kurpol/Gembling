#include "Create_Interface.h"

AbstractEnemy* CreateEasy::CreateEnemy()
{
	return new Human();
}

AbstractMonster* CreateEasy::CreateMonster()
{
	return new TinyZombee();
}

AbstractEnemy* CreateMiddle::CreateEnemy()
{
	return new Warrior();
}

AbstractMonster* CreateMiddle::CreateMonster()
{
	return new AngryZombee();
}

AbstractEnemy* CreateHard::CreateEnemy()
{
	return new Mage();
}

AbstractMonster* CreateHard::CreateMonster()
{
	return new StrongZombee();
}