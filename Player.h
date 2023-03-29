#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Creature.h"
class Player :
    public Creature
{
public:
    Player(const std::string& name, int health, int damage, Room* spawnroom);

    void showInventory() const;

private:
    std::vector<Item*> m_inventory;
};

#endif // PLAYER_H
