#include "../Pancake.h"

LinkedList<Product*> Pancake::recipe;

void Pancake::initRecipe(){
  recipe.add(new ChickenEgg());
  recipe.add(new CowMilk());
}

Pancake::Pancake():SideProduct(75000,"Pancake"){}

LinkedList<Product*> Pancake::getRecipe(){
  return recipe;
}

bool Pancake::validateRecipe(LinkedList<Product*> inventory){
  bool val = false;

  LinkedList<Product*> temp = inventory;
  LinkedList<Product*> tempRecipe = Pancake::recipe;

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
