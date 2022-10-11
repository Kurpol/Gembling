#ifndef MONSTER_H
#define MONSTER_H

class AbstractMonster
{
public:

	virtual ~AbstractMonster() {};
	virtual bool isAlive() = 0;

private:
};

class TinyZombee : public AbstractMonster
{
public:
	TinyZombee();
	~TinyZombee();
	bool isAlive();
private:
	unsigned short health_;
	unsigned int damage_;
	bool active_;
};

class AngryZombee : public AbstractMonster
{
public:
	AngryZombee();
	~AngryZombee();
	bool isAlive();
private:
	unsigned short health_;
	unsigned int damage_;
	bool active_;
};

class StrongZombee : public AbstractMonster
{
public:
	StrongZombee();
	~StrongZombee();
	bool isAlive();
private:
	unsigned short health_;
	unsigned int damage_;
	bool active_;
};

void eraseMonster(AbstractMonster* monster);
#endif 


