#pragma once
#ifndef BALANCE_HPP
#define BALANCE_HPP

namespace Economy{

struct Balance {
    long long amount;
    long long limit;

    void addBalance(long long amount);
    void setBalance(long long amount);
    void delBalance(long long amount);

    void upgradeLimit();
    void checkBal();

    long long getBalance();
    long long getLimit();
};

}
#endif