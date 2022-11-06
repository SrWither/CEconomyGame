#pragma once
#ifndef UPGRADE_HPP
#define UPGRADE_HPP

#include <game/item.hpp>

namespace Economy{
    
    template<typename T>
    T upgradeItem(T item, Economy::ItemList);
    
    template<typename T>
    T upgradeBalSize();
}
#endif