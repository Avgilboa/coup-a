#pragma once
#include "Game.hpp"
namespace coup{
enum prevMove{Start,Income,Foreign_aid,Coup, Steal,Transfer, Tax};
/*  
if there is a player with ten coins at his turn he has to so coup.
 */
class Game;
    class Player
    {
    public:
        unsigned int id;
        std::string _name;
        int _coin;
        Game* game;
        prevMove act;
        std::string _role;
        bool IsAlive = true;
        /* basic steps */
        void income();  // the player takes one coin
        void foreign_aid(); // the player takes two coins ~~ if there is a duke he can prevent the taking 2 cions
        virtual void coup (Player&other); //cost 7 coins and kill one of the players
        int coins() const; // return the number of coins the player has.
        std::string Get_Name() const;
        Player(Game & meant,const char * name);
        Player();
        ~Player(){};





    };
    
    
}