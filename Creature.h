

#ifndef CREATURE_H
#define CREATURE_H

#include "Entity.h"

class Creature : public Entity {
public:
    Creature(const std::string& name, int damage);

    int getDamage() const;

protected:
    int m_damage;
};

#endif // CREATURE_H


