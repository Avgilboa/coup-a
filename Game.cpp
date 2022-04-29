#include "Game.hpp"
using namespace std;
namespace coup{
    Game::Game(){
        this->begin = false;
        this->curr_turn =0;
    }
    vector<string> Game::players(){
        vector<string> names;
        this->actors.shrink_to_fit();
        for(size_t i=0; i<this->actors.size();i++){
            names.push_back(this->actors.at(i).Get_Name());
        }
        return names;
    } 
    string Game::winner(){
        this->actors.shrink_to_fit();
        if(this->begin && this->actors.size()==1){
            return this->actors.at(0).Get_Name();
        }
        throw __EXCEPTION__ ("The Game is not ending yet");
    }

    void Game::next(){
        this->curr_turn++;
        if(this->curr_turn==this->actors.size()){
            this->curr_turn =0;
        }
    }

    string Game::turn(){
        return this->actors.at(this->curr_turn).Get_Name();
    }
}