#include <game/item.hpp>
#include <json/utils.hpp>

namespace Economy{

// Initialize pickaxe
Pickaxe::Pickaxe() {
    this->data.id = PICKAXE;
    this->data.name = "Pickaxe";
    this->data.lvl = GameJson::getItem("pickaxe");
}

Pickaxe::~Pickaxe(){

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