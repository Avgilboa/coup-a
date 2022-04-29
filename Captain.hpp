#include "Game.hpp"

namespace coup{
    class Captain:public Player{
    public:
        Player * stolen;
        Captain(Game &meant,const char * name);
        static void block(Player &other); //can block another captain from stealing 2 coins
        void steal(Player &other); // stealing from another palyer 2 coins
        std::string role();
    };
}