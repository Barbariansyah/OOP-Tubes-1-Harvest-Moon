#include "Game.h"

int main(){
    // Game::Initialize("map.txt",13,10);
    // while (true){
    //     Game::Tick();
    //     Game::DrawScreen();
    // }
    // return 0;

    LinkedList<Product*> inventoryTest;
    inventoryTest.add(new CowMeat());
    inventoryTest.add(new ChickenEgg());
    inventoryTest.add(new ChickenEgg());


    Pancake::initRecipe();

    cout<< Pancake::validateRecipe(inventoryTest)<<endl;
}
