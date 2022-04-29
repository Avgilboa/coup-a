#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
#include "doctest.h"

#include <exception>

using namespace coup;

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

TEST_CASE(""){
    Game game{};
    Contessa c(game,"baruch");
    game.begin = true;
    CHECK_EQ(game.winner(),"baruch");
    CHECK_THROWS(Captain(game,"shimi"));
    game.begin = false;
    CHECK_NOTHROW(Captain(game,"shimi"));
    CHECK_NOTHROW(Captain(game,"shimi"));
    CHECK_NOTHROW(Assassin(game,"james"));
    CHECK_NOTHROW(Duke(game,"David"));
    CHECK_NOTHROW(Ambassador(game,"Rick"));
    vector<string> v = game.players();
    CHECK(v.size()==7);
    CHECK(v.at(0)=="baruch");
    CHECK(v.at(1)=="shimi");
    CHECK(game.turn()== "baruch");
    for(Player p : game.actors){
        CHECK_NOTHROW(p.income());
        CHECK(p.coins()==1);
    }
    Assassin assassin(game,"yuval");
    CHECK_THROWS(assassin.coup(c));
    assassin._coin =3;
    CHECK(assassin.coins()==0);
    CHECK_NOTHROW(assassin.coup(c));
    for(string p : game.players()){
        CHECK(p!="baruch");
    }
    

}
