#include "../BeefRolade.h"

LinkedList<string> BeefRolade::recipe;

void BeefRolade::initRecipe(){
  recipe.add("Cow Meat");
  recipe.add("Chicken Egg");
}

BeefRolade::BeefRolade():SideProduct(100000,"Beef Rolade"){
}

LinkedList<string> BeefRolade::getRecipe(){
  return recipe;
}

bool validateRecipe(LinkedList<Product*> inventory){
  bool val = false;
  LinkedList<Product*> temp = inventory;
  LinkedList<string> tempRecipe = BeefRolade::recipe;

  

  if(tempRecipe.isEmpty()){
    val = true;
  }
  return val;
}
