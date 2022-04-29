#include "Contessa.hpp"
using namespace std;
namespace coup{
    Contessa::Contessa(Game & meant,const char * name) : Player(meant, name){
        this->_role = "Contessa";
    }
    void Contessa::block(Player& other){
        if(!other.IsAlive){
            other.IsAlive =true;
        }
    }
    string Contessa::role(){
        return this->_role;
    }
}