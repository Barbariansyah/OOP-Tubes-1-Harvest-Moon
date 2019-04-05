#include "../BeefRolade.h"

LinkedList<Product*> BeefRolade::recipe;

void BeefRolade::initRecipe(){
  recipe.add(new ChickenEgg());
  recipe.add(new CowMeat());
}

BeefRolade::BeefRolade():SideProduct(100000,"Beef Rolade"){
}

LinkedList<Product*> BeefRolade::getRecipe(){
  return recipe;
}

bool BeefRolade::validateRecipe(LinkedList<Product*> inventory){
  bool val = false;

  LinkedList<Product*> temp = inventory;
  LinkedList<Product*> tempRecipe = BeefRolade::recipe;

  int i = 0;
  while((temp.length() >= tempRecipe.length()) && i <tempRecipe.length()){
    int del;
    del = temp.findPointer(tempRecipe.get(i));
    if (del != -1){
      temp.remove(temp.get(del));
      tempRecipe.remove(tempRecipe.get(i));
    }
    else{i++;}
    }

  if(tempRecipe.isEmpty()){
    val = true;
  }
  return val;
}
