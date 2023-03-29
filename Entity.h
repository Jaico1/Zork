#pragma once
#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <vector>

enum EntityType
{
    ENTITY,
    ROOM,
    EXIT,
    ITEM,
    CREATURE,
    PLAYER,
    NPC

};

class Entity {
public:
    Entity(const std::string& name, const std::string& description);
    virtual ~Entity();

    std::string GetName() const;
    std::string GetDescription() const;
    void AddEntity(Entity* entity);
    void RemoveEntity(Entity* entity);
    Entity* GetEntityByName(const std::string& name) const;

private:
    std::string name_;
    std::string description_;
    
};

#endif

