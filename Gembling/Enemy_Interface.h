#ifndef ENEMY_H
#define ENEMY_H

class AbstractEnemy
{
public:
	
	virtual	~AbstractEnemy() {};
	virtual bool isAlive() = 0;

private:
};

class Human : public AbstractEnemy
{
public:
	Human();
	~Human();
	bool isAlive();
private:
	unsigned short health_;
	unsigned int damage_;
	bool active_;
};


class Warrior : public AbstractEnemy
{
public:
	Warrior();
	~Warrior();
	bool isAlive();
private:
	unsigned short health_;
	unsigned int damage_;
	bool active_;
};

class Mage : public AbstractEnemy
{
public:
	Mage();
	~Mage();
	bool isAlive();
private:
	unsigned short health_;
	unsigned int damage_;
	bool active_;
};

void eraseEnemy(AbstractEnemy* enemy);
#endif // !ENEMY_H
