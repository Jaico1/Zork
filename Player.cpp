#include "Player.h"
#include <iostream>


Player::Player(const std::string& name, const std::string& description, int health, int damage, Room* spawnroom)
    : Creature(name, description) {}

void Player::showInventory() const {
    std::cout << "Inventory:\n";
    for (const auto& item : m_inventory) {
        std::cout << "- " << item->getName() << "\n";
    }
}
