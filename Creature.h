#ifndef CREATURE_H
#define CREATURE_H

#include "Entity.h"
#include "Room.h"

class Creature : public Entity {
public:
    Creature(const std::string& name, const std::string& description);


protected:
    int name_;
    
};

#endif // CREATURE_H


