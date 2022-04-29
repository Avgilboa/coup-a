#include "Player.hpp"
using namespace std;
namespace coup{
    enum prevMove;
    Player::Player(Game & meant,const char * name){
        this->game = &meant;
        this->_name = string(name);
        this->_coin =0;
        this->act = Start;
        meant.actors.push_back(*this);
        this->id = meant.actors.size();
    }
    Player::Player(){
        this->act = Start;
        this->_coin =0;
        this->game = NULL;
    }
    void Player::income(){
       this->act = Income;
        this->_coin++;
        this->game->next();
    }
    void Player::foreign_aid(){
      this->act = Foreign_aid;
       this->_coin+=2; 
       this->game->next();
    }
    void Player::coup(Player& other){
       this->act = Coup;
       vector<Player> vec = this->game->actors;
       vector <Player>::iterator it3;
       for(it3 = vec.begin();it3 != vec.end(); ++it3){
           if(it3->id==other.id){
               it3 = vec.erase(it3);
               break;
           }
       }
       this->game->next();
    }

    int Player::coins() const{
        return _coin;
    }

    string Player::Get_Name() const{
        return this->_name;
    }
}
