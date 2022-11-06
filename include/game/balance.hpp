#pragma once
#ifndef BALANCE_HPP
#define BALANCE_HPP

namespace Economy{

struct Balance {
    int amount;
    int limit;

    void addBalance(int amount);
    void setBalance(int amount);
    void delBalance(int amount);

    void upgradeLimit();
    void checkBal();

    int getBalance();
    int getLimit();
};

}
#endif