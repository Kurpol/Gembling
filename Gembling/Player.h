#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Enemy_Interface.h"
#include "Monster_Interface.h"

class Player
{
protected:
    Player(const std::string& value);
    static Player* playerpoint_;

    std::string name_;
    unsigned short health_;
    unsigned short level_;
    unsigned short dexterity_;
    unsigned short strength_; 
    unsigned short intelligence_;
    unsigned int damage_;
    unsigned int expirience_;

public:
    Player(Player& other) = delete; // copy 
    void operator=(const Player&) = delete; // =operation

    static Player* GetPlayer(const std::string& value); // Player creation
    
    void LevelUp();
    void ShowInfo();
    void SetExperience();
    bool Battle(Player *player, AbstractEnemy *Enemy, AbstractMonster *Monster);
};

#endif // !PLAYER_H
