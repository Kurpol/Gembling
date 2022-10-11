#include <iostream>
#include <string>
#include <random>
#include "Player.h"
#include "Game.h"

void menu();
void game();
void overlay(Player* player, Game* game);
std::string random_string(size_t length);

void menu()
{
	std::cout << "GEMBLING" << std::endl << std::endl << std::endl;
	std::cout << "1. Play game" << std::endl;
	std::cout << "2. Description" << std::endl;
	std::cout << "3. Exit" << std::endl << std::endl;
	std::cout << "Enter the number" << std::endl;

	unsigned short choice = 0;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		game();
	case 2:
		std::cout << "Just a simulation of fightning, nothing special. Your Character has health, if health less then 0, your character will die." << std::endl;
	case 3:
		std::cout << "...." << std::endl;
	}
}

void overlay(Player* player, Game* game)
{
	std::cout << "Select an action" << std::endl << std::endl << std::endl;
	std::cout << "1. Take a punch " << std::endl;
	std::cout << "2. Dodge a hit" << std::endl;
	std::cout << "3. Try to escape" << std::endl << std::endl;
	std::cout << "4. Show player information" << std::endl;
	std::cout << "Enter the number" << std::endl;

	unsigned short choice = 0;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		
	case 2:
		
	case 3:
		
	case 4:
		player->ShowInfo();
		std::cout << "that`s all " << std::endl;
	}
}

std::string random_string(size_t length)
{
	auto randchar = []() -> char
	{
		const char charset[] =
			"0123456789"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"abcdefghijklmnopqrstuvwxyz";
		const size_t max_index = (sizeof(charset) - 1);
		return charset[rand() % max_index];
	};
	std::string str(length, 0);
	std::generate_n(str.begin(), length, randchar);
	return str;
}

void game()
{
	std::cout << "Game start" << std::endl;
	std::cout << "Player creating... " << std::endl;

	std::string name = random_string(10);

	Player* player = Player::GetPlayer(name);
	Game* game = Game::StartGame();

	player->ShowInfo();
}


int main()
{
	menu();
	return 0;
}

