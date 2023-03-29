#include "Room.h"
#include "Entity.h"
#include "Exit.h"

Room::Room(const std::string& name, const std::string& description)
    : Entity(name, description)
{
}






void Room::addExit(const std::string& name, Room* exit) {
    exits.push_back(exit);
}



