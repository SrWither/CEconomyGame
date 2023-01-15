#include "json/utils.hpp"
#include <game/player.hpp>
#include <game/upgrade.hpp>
#include <game/work.hpp>
#include <iostream>
#include <string>
#include <unistd.h>

void upgradeMenu(Economy::Player player) {
  bool isRunning = true;

  while (isRunning) {
    player.UpdatePlayer();
    long long lvlPrice = GameJson::getData("limit") / 1.2;
    std::cout << "\033c";
    std::cout << "CEconomyGame - Upgrade"
              << "\n\n1) Lvl Up: $" << lvlPrice << "\n2) Back \n\nBalance: $"
              << player.balance.amount << "\n\nOption: ";

    std::string option;
    std::getline(std::cin, option);

    if (option == "1")
      Economy::upgradePlayer();
    else if (option == "2")
      break;
  }
}

int main() {
  bool isRunning = true;
  Economy::Player *player = new Economy::Player();

  while (isRunning) {
    player->UpdatePlayer();
    std::cout << "\033c";
    std::cout
        << "CEconomyGame - " << player->name
        << "\n\n1) Work\n2) Mine\n3) Shop\n4) Upgrade\n5) Exit\n\nBalance: $"
        << player->balance.amount << "\n\nOption: ";

    std::string option;
    std::getline(std::cin, option);

    if (option == "1")
      Economy::work();
    else if (option == "2")
      player->pickaxe->Mine();
    else if (option == "3")
      continue;
    else if (option == "4")
      upgradeMenu(*player);
    else if (option == "5")
      exit(1);
  }

  return 0;
}
