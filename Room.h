#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include "entity.h"

class Room : public Entity {
public:
    Room(const std::string& name, const std::string& description);

    void addExit(const std::string& exitName, Room* exit);
    void addItem(Item* item);
    void removeItem(Item* item);
    std::vector<Item*>& getItems();
    Room* getExit(const std::string& exitName);
    std::string displayItems();

    

private:
    std::vector<Item*> items;
    
};

#endif
