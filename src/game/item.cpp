#include <game/item.hpp>
#include <game/balance.hpp>
#include <json/utils.hpp>
#include <iostream>
#include <unistd.h>

namespace Economy{

// Initialize pickaxe
Pickaxe::Pickaxe() {
    this->data.id = PICKAXE;
    this->data.name = "Pickaxe";
    this->data.lvl = GameJson::getItem("pickaxe");
}

Pickaxe::~Pickaxe(){

}

void Pickaxe::Mine() {
    if(GameJson::getItem("pickaxe") <= 0) {
        std::cout << "No tienes pico" << std::endl;
        sleep(1);
    } else {
        Economy::Balance *bal = new Economy::Balance();
        long long amount = rand() % 200 + 700 * GameJson::getItem("pickaxe");
        bal->addBalance(amount);
        std::cout << "Has minado y ganaste " << amount << "$" << std::endl;
        sleep(1);
        delete bal;
    }
}

// Initialize axe
Axe::Axe() {
    this->data.id = AXE;
    this->data.name = "Axe";
    this->data.lvl = GameJson::getItem("axe");
}

Axe::~Axe(){

}

// Initialize fishrod
Fishrod::Fishrod() {
    this->data.id = FISHROD;
    this->data.name = "Fish Rod";
    this->data.lvl = GameJson::getItem("fishrod");
}

Fishrod::~Fishrod(){

}

}
