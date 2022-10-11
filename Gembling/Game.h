#ifndef GAME_H
#define GAME_H
#include <string>
#include "Create_Interface.h"

class Game
{
protected:
	Game();
	static Game* gamepoint_;
	
	unsigned short wave;
	bool result;

public:
	Game(Game& other) = delete;
	void operator=(const Game&) = delete;

	static Game* StartGame(); 

	void newWave();
};

#endif // !GAME_H
