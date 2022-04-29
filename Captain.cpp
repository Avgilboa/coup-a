#include "Captain.hpp"
using namespace std;
namespace coup{
    Captain::Captain(Game & meant,const char * name) : Player(meant, name){
        this->_role = "Captain";
    }

    void Captain::block(Player& other){
        if(other._role=="Captain"){
            if(other.act==Steal){
                /*  block and return the coin */
            }
        }
    }

    void Captain::steal(Player & other){
        for(unsigned int i=0;other.coins()==0 || i<2;i++){
            other._coin--;
            this->_coin++;
        }
        this->act = Steal;
        this->game->next();
    }

    string Captain::role(){
        return this->_role;
    }
}