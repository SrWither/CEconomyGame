#include <game/player.hpp>
#include <json/utils.hpp>
#include <iostream>

namespace Economy {

// Initialize properties of player
Economy::Player::Player() {
    if(GameJson::getName() == "") {
        this->m_hasData = false;
    }
    if(m_hasData){
        this->name = GameJson::getName();
        this->balance.amount = this->balance.getBalance();
        this->balance.limit = GameJson::getData("limit");
        this->m_hp = GameJson::getData("hp");
        this->m_level = GameJson::getData("lvl");

    } else {
        std::cout << "Pon un nombre: ";
        std::getline(std::cin,this->name);
        GameJson::writeName(name);
        this->m_level = 1;
        this->balance.limit = 10000;
        this->balance.amount = 100;
        this->m_hp = 100;
    }
}

void Economy::Player::UpdatePlayer(){
    this->balance.checkBal();
    this->name = GameJson::getName();
    this->balance.amount = this->balance.getBalance();
    this->balance.limit = GameJson::getData("limit");
    this->m_hp = GameJson::getData("hp");
    this->m_level = GameJson::getData("lvl");
}

Economy::Player::~Player() {
    
}

}