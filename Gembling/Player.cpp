#include "Player.h"
#include <iostream>

Player* Player::playerpoint_ = nullptr;

Player::Player(const std::string& value) : name_(value)
{
    health_ = 50;  // all values are base at the start.
    level_ = 1;
    dexterity_ = 12;
    strength_ = 12;
    intelligence_ = 8;
    expirience_ = 0;
    damage_ = 8;
}

void Player::LevelUp()
{
    std::cout << "Congratz! Level UP! " << std::endl;
    this->level_ += 1;
    this->health_ += 10;
    this->dexterity_ += 2;
    this->strength_ += 2;
    this->intelligence_ += 2;
    this->damage_ += 3;
    std::cout << "Stats were increased" << std::endl;
}

Player* Player::GetPlayer(const std::string& value)
{
    if (playerpoint_ == nullptr) {
        playerpoint_ = new Player(value);
    }
    return playerpoint_;
}

void Player::ShowInfo()
{
    system("cls");
    std::cout << "STATS: " << std::endl;
    std::cout << "Your Name " << this->name_ << std::endl;
    std::cout << "Your level " << this->level_  << std::endl;
    std::cout << "Your health " << this->health_ << std::endl;
    std::cout << "Your dexterity " << this->dexterity_ << std::endl;
    std::cout << "Your strength " << this->strength_ << std::endl;
    std::cout << "your intelligence " << this->intelligence_ << std::endl;
    std::cout << "Your damage " << this->damage_ << std::endl;
}
