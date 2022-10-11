#include "Game.h"
#include <iostream>

Game* Game::gamepoint_ = nullptr;

void Game::newWave()
{
	std::cout << "New wave begins" << std::endl;
    
}

Game* Game::StartGame()
{
    if (gamepoint_ == nullptr) {
        gamepoint_ = new Game();
    }
    return gamepoint_;
}

Game::Game()
{
    std::cout << "Object created" << std::endl;
}