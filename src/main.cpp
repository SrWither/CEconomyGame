#include <iostream>
#include <game/player.hpp>
#include <game/work.hpp>
#include <string>

int main() {
    bool isRunning = true;
    Economy::Player *player = new Economy::Player();

    while(isRunning) {
        player->UpdatePlayer();
        std::cout << "\033c";
        std::cout << "CEconomyGame - " << player->name << "\n\n1) Work\n2) Mine\n3) Shop\n4) Upgrade\n5) Exit\n\nBalance: $"<< player->balance.amount << "\n\nOption: ";
        
        std::string option;
        std::getline(std::cin, option);

        if(option == "1")
            Economy::work();
        else if (option == "2")
            continue;
        else if (option == "3")
            continue;
        else if (option == "4")
            continue;
        else if (option == "5")
            exit(1);
    }

    return 0; 
}