#include "json/utils.hpp"
#include <game/balance.hpp>
#include <fstream>
#include <iostream>
#include <json/json.hpp>
#include <unistd.h>

using json = nlohmann::json;

namespace Economy {

int Economy::Balance::getBalance(){
    return GameJson::getData("balance");
}

int Economy::Balance::getLimit(){
    return GameJson::getData("limit");
}

void Economy::Balance::setBalance(int amount) {
    GameJson::writeProp("balance", amount);
}

void Economy::Balance::addBalance(int amount) {
    int bal = Economy::Balance::getBalance();
    Economy::Balance::setBalance(bal + amount);
}

void Economy::Balance::delBalance(int amount){
    int bal = Economy::Balance::getBalance();
    if(bal - amount <= 0){
        Economy::Balance::setBalance(0);
    } else {
        Economy::Balance::setBalance(bal - amount);
    }
}

void Economy::Balance::upgradeLimit() {
    int limit = Economy::Balance::getLimit();
    GameJson::writeProp("limit", limit + 10000);
}

void Economy::Balance::checkBal() {
    int limit = Economy::Balance::getLimit();
    int bal = Economy::Balance::getBalance();
    
    if(bal > limit) {
        Economy::Balance::setBalance(limit);
        std::cout << "Necesitas subir de nivel para poder almacenar mas dinero" << std::endl;
        sleep(1);
    }
}

}