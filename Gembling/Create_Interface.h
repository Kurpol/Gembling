#ifndef CREATE_H
#define CREATE_H
#include "Enemy_Interface.h"
#include "Monster_Interface.h"

class AbstractCreateMob
{
public:
	virtual AbstractEnemy* CreateEnemy() const = 0;
	virtual AbstractMonster* CreateMonster() const = 0;

private:
};

class CreateEasy
{
public:
	virtual AbstractEnemy* CreateEnemy();
	virtual AbstractMonster* CreateMonster();
};

class CreateMiddle
{
public:
	virtual AbstractEnemy* CreateEnemy();
	virtual AbstractMonster* CreateMonster();
};

class CreateHard
{
public:
	virtual AbstractEnemy* CreateEnemy();
	virtual AbstractMonster* CreateMonster();
};

#endif