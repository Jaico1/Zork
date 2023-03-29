#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Creature.h"
#include "Item.h"
#include "Entity.h"
#include "Room.h"


class Player :
    public Creature
{
public:
    Player(const std::string& name, const std::string& description, int health, int damage, Room* spawnroom );

    void Move(Room* currentroom);
    void showInventory() const;

private:
    std::vector<Item*> m_inventory;
};

#endif // PLAYER_H
