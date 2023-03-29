#ifndef NPC_H
#define NPC_H

#include "Creature.h"
#include "Item.h"
#include "Room.h"

class Npc : public Creature {
public:
    Npc(const std::string& name, const std::string& description, int health, int damage, const std::string& message, Room* spawnroom);

    void talk() const;

protected:
    std::string m_message;
    std::vector<Item*> m_inventory;
};

#endif // NPC_H

