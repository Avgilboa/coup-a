#include "Game.hpp"

namespace coup{

    class Assassin:public Player{
    public:
        Assassin(Game & meant,const char * name);
        void coup(Player & other) override;  // coup with 3 coins intead of 7
        static std::string role();
    };
}