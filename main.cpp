#include "Game.h"

int main(){
    Game::Initialize("");
    Game::LoadGame("map.txt");
    Game::getPlayer().GetInventory().add(new CowMeat());
    Game::getPlayer().GetInventory().add(new CowMeat());
    Game::getPlayer().GetInventory().add(new ChickenEgg());
    while (true){
        Game::Tick();
        Game::DrawScreen();
    }
    return 0;
}
