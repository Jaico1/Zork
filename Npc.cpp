#include "NPC.h"
#include <iostream>

Npc::Npc(const std::string& name, const std::string& description, int health, int damage, const std::string& message, Room* spawnroom)
    : Creature(name, description), m_message(message) 
{
}



void Npc::talk() const {
    std::cout << m_message << std::endl;
}
