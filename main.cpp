#include "Game.h"

int main(){
    Game::Initialize("");
    Game::LoadGame("test.txt");
    Game::DrawScreen();
    // cout << Game::getLand(0,0).Render();
    return 0;
}
