#include "World.h"
#include "Item.h"
#include "Exit.h"
#include "Room.h"
#include "Npc.h"
#include "Player.h"

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
    Player* player = new Player("player", 100, 10, livingRoom);

    //Create Npcs

    NPC* chef = new NPC("chef", 100, 50, "Dont bother me i need to get this food done",kitchen);
        

    // Add entities to world
    entities.push_back(key);
    entities.push_back(sword);
    entities.push_back(livingRoom);
    entities.push_back(kitchen);
    entities.push_back(hallway);
    entities.push_back(player);
}