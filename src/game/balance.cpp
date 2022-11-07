#include <json/utils.hpp>
#include <game/balance.hpp>
#include <fstream>
#include <iostream>
#include <json/json.hpp>
#include <unistd.h>

using json = nlohmann::json;

namespace Economy {

long long Economy::Balance::getBalance(){
    return GameJson::getData("balance");
}

long long Economy::Balance::getLimit(){
    return GameJson::getData("limit");
}

void Economy::Balance::setBalance(long long amount) {
    GameJson::writeProp("balance", amount);
}

void Economy::Balance::addBalance(long long amount) {
    long long bal = Economy::Balance::getBalance();
    Economy::Balance::setBalance(bal + amount);
}

void Economy::Balance::delBalance(long long amount){
    long long bal = Economy::Balance::getBalance();
    if(bal - amount <= 0){
        Economy::Balance::setBalance(0);
    } else {
        Economy::Balance::setBalance(bal - amount);
    }
}

void Economy::Balance::upgradeLimit() {
    // Get Data
    long long limit = Economy::Balance::getLimit();
    long long lvl = GameJson::getData("lvl");

    // Increment limit
    GameJson::writeProp("limit", limit * lvl);
}

void Economy::Balance::checkBal() {
    // Get data
    long long limit = Economy::Balance::getLimit();
    long long bal = Economy::Balance::getBalance();
    
    // Check limits
    if(bal > limit) {
        Economy::Balance::setBalance(limit);
        std::cout << "Necesitas subir de nivel para poder almacenar mas dinero" << std::endl;
        sleep(1);
    }
}

}