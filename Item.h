#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item :public Entity{
public:
    Item(std::string name, std::string description, Room* room);
    

    std::string getName() const;
    std::string getDescription() const;
    void setDescription(std::string description);

    

private:
    std::string name_;
    std::string description_;
};

#endif // ITEM_H

