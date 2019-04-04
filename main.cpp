#include "Game.h"

int main(){
    Game::Initialize("");
    Game::LoadGame("test.txt");
    while (true){
        Game::Tick();
        Game::DrawScreen();
    }
    return 0;
}
