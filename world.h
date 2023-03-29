#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include <string>
#include "Entity.h"

class World {
public:
    World();
    
    Entity* getEntity(std::string entityName);
    std::vector<Entity*> getEntities();


private:
    std::vector<Entity*> entities;
};

#endif // WORLD_H


