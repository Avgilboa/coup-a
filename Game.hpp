#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"
namespace coup{
class Player;
class Game
{
    public: 
        bool begin;
        unsigned int curr_turn;
        std::vector<Player> actors;
        void next();
        
    
        std::vector<std::string> players();
        std::string turn(); /// print the turn of the current player
        std::string winner(); /// return the name of the winner
        Game();
        ~Game(){};
};


}