#include "Item.h"

Item::Item(std::string name, std::string description, Room* spawnroom)
    :Entity(name, description)
{}



void Item::use() {}

 std::string Item::getName() const{
    return name;
}

 std::string Item::getDescription() const {
    return description;
}
