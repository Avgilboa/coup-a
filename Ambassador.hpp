#include "Game.hpp"
namespace coup{
    class Ambassador:public Player{
    public:
        Ambassador(Game & meant,const char * name);
        void transfer(Player& src, Player& dst); //  2 coins from palyer src to dst
        static void block(Player& other); ///block the captain from stealing 2 coins
        static std::string role();
    };
}