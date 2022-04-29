#include "Duke.hpp"
using namespace std;
namespace coup{
    Duke::Duke(Game & meant,const char * name) : Player(meant, name){
        this->_role = "Duke";
    }
    void Duke::block(Player& other){
        if(other.act==Foreign_aid){
            other._coin-=2;
        }
    }
    void Duke::tax(){
        this->_coin+=3;
        this->act = Tax;
        this->game->next();
    }
    string Duke::role(){
        return this->_role;
    }
}