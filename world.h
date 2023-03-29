#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include <string>
#include "Entity.h"

class Player;
class Entity;


class World {
public:
    World();
    
    std::string processCommand(std::string command);
    Entity* getEntity(std::string entityName);
    std::vector<Entity*> getEntities();


private:
    std::vector<Entity*> entities;
    Player* player;
};

#endif // WORLD_H


