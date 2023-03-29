#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "Entity.h"
#include "Room.h"

class Room;

class Item :public Entity{
public:
    Item(std::string name, std::string description, Room* spawnroom);
     std::string getName() const ;
     std::string getDescription() const;
    void use();
    

private:
    std::string name;
    std::string description;
};

#endif // ITEM_H

