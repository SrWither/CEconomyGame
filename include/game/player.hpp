#pragma once
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <game/balance.hpp>
#include <game/item.hpp>
#include <string>

namespace Economy {

// Player properties
class Player {
    public:
        
        Player();
        void UpdatePlayer();
        virtual ~Player();

        std::string name;
        struct Economy::Balance balance;

        Pickaxe *pickaxe = new Pickaxe();
        Axe *axe = new Axe();
        Fishrod *fishrod = new Fishrod();
        
        void setHp(int amount);
        void lvlUp();

    private:
        bool m_hasData = true;
        int m_level;
        int m_hp;
};

}

#endif