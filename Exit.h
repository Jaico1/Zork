#ifndef EXIT_H
#define EXIT_H

#include "Entity.h"
#include "Room.h"


class Exit : public Entity {
private:
    Room* source;
    Room* destination;
public:
    Exit(std::string name, std::string description,Room* source,  Room* destination);
    ~Exit();

    // Getters
    std::string getDirection();
    Room* getDestination();

    // Setters
    void setDirection(std::string direction);
    void setDestination(Room* destination);
};

#endif /* EXIT_H */