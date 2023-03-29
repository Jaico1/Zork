#ifndef EXIT_H
#define EXIT_H

#include "Entity.h"

class Exit : public Entity {
private:
    Room* source_;
    Room* destination_;
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