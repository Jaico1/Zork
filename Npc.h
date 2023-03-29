#ifndef NPC_H
#define NPC_H

#include "Creature.h"

class NPC : public Creature {
public:
    NPC(const std::string& name, int health, int damage, const std::string& message, Room* spawnroom);

    void talk() const;

protected:
    std::string m_message;
    std::vector<Item*> m_inventory;
};

#endif // NPC_H

