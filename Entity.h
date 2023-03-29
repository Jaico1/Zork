#pragma once
#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <vector>

class Entity {
public:
    Entity(const std::string& name, const std::string& description);

    std::string GetName() const;
    std::string GetDescription() const;
    void AddEntity(Entity* entity);
    void RemoveEntity(Entity* entity);
    Entity* GetEntityByName(const std::string& name) const;

protected:
    std::string name_;
    std::string description_;
    
};

#endif

