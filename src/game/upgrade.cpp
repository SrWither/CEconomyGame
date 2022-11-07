#include "game/balance.hpp"
#include <json/utils.hpp>
#include <iostream>
#include <game/player.hpp>
#include <unistd.h>

namespace Economy{
    void upgradeItem(std::string camp){

    }

    void upgradePlayer(){
        // Get data
        long long lvl = GameJson::getData("lvl");
        long long lvlPrice = GameJson::getData("limit") / 1.2;
        Economy::Balance *bal = new Economy::Balance();

        if(bal->getBalance() >= lvlPrice){
            // Upgrade player lvl
            GameJson::writeProp("lvl", lvl+1);
            // Upgrade balance limit
            bal->upgradeLimit();
            bal->delBalance(lvlPrice);
            std::cout << "Subiste al nivel " << lvl+1 << std::endl;
            sleep(1);
            delete bal;
        } else {
            std::cout << "Dinero insuficiente" << std::endl;
            sleep(1);
            delete bal;
        }
        
    }
}