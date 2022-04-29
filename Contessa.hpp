#include "Game.hpp"

namespace coup{
    class Contessa:public Player{
    public:
        Contessa(Game & meant,const char * name);
        static void block(Player& other); ///block the assasian from coup
        std::string role();
    };
}