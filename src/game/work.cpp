#include "game/balance.hpp"
#include <cstdlib>
#include <game/work.hpp>
#include <game/player.hpp>
#include <json/utils.hpp>
#include <iostream>
#include <unistd.h>

namespace Economy{

void work(){
    Economy::Balance *bal = new Economy::Balance();
    int amount = rand() % 500 + 1000 * GameJson::getData("lvl");
    bal->addBalance(amount);
    std::cout << "Has trabajado y ganaste " << amount << "$" << std::endl;
    sleep(1);
    delete bal;
}

}