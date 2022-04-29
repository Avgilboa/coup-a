#include "Assassin.hpp"
using namespace std;
namespace coup{
    /* do function iterate at the begining on the players id there is Is alive = false it kill him   */
    Assassin::Assassin(Game & meant,const char * name) : Player(meant, name){
        this->_role = "Assassin";
    }
    void Assassin::coup(Player & other){
        other.IsAlive = false;
        this->_coin-=3;
        this->game->next();
    }

    string role(){
        return string("Assassin");
    }

}