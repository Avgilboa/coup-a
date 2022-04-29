#include "Ambassador.hpp"
using namespace std;
namespace coup{
    Ambassador::Ambassador(Game & meant,const char * name) : Player(meant, name){
        this->_role = "Ambassador";
    }
    void Ambassador::transfer(Player& src, Player& dst){
        /* check if the players are in the game  */
        for(unsigned int i=0; i<2 || src.coins()==0;i++){
            src._coin--;
            dst._coin++;
        }
        this->act = Transfer;
        this->game->next();
    }

    void Ambassador::block(Player& other){
        if(other._role=="Captain"){
            if(other.act == Steal){
                /* need to complete here   */
            }
        }
    }
    
    string Ambassador::role(){
        return string("Ambassador");
    }
}
