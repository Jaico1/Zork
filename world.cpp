#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "World.h"
#include "Item.h"
#include "Exit.h"
#include "Room.h"
#include "Npc.h"
#include "Player.h"
#include "Entity.h"





World::World() {
    // Create rooms
    Room* livingRoom = new Room("living room", "A cozy living room");
    Room* kitchen = new Room("kitchen", "A messy kitchen");
    Room* hallway = new Room("hallway", "A dark hallway");

    // Create items
    Item* key = new Item("key", "A shiny golden key", livingRoom);
    Item* sword = new Item("sword", "A sharp steel sword", hallway);

    // Set up room exits
    livingRoom->addExit("door", kitchen);
    kitchen->addExit("door", livingRoom);
    kitchen->addExit("window", hallway);
    hallway->addExit("window", kitchen);

    // Create player
    Player* player = new Player("Visitor","You enter a mysterious house", 100, 10, livingRoom);

    //Create Npcs

    Npc* chef = new Npc("chef","Seems to be busy", 100, 50, "Dont bother me i need to get this food done", kitchen);


    // Add entities to world
    entities.push_back(key);
    entities.push_back(sword);
    entities.push_back(livingRoom);
    entities.push_back(kitchen);
    entities.push_back(hallway);
    entities.push_back(chef);
    entities.push_back(player);

    
    
}




std::vector<std::string> splitString(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

std::string World::processCommand(std::string command)
{
    // Split the command into words
    std::vector<std::string> words = splitString(command, ' ');

    if (words.empty()) {
        
        return "Invalid command.";
    };

    return ""; 
}