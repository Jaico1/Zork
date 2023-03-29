#include "world.h"
#include "player.h"
#include <string>
#include <sstream> 
#include <iostream>


int main() {
    // Create a new World object
    World world;
    std::string input;
   
    std::cout <<  "Welcome to NewkZork!\n" ; 
    std::cout << "---------------------\n";
    std::cout << "Write QUIT to quit at anytime";


    // Run the game loop
    while (input!= "QUIT") {
        // Get user input
       
        std::getline(std::cin, input);

        // Process the user input
        std::string output = world.processCommand(input);

        // Display the output to the user
        std::cout << output << std::endl;
    }

    
}
