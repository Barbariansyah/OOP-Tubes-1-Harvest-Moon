#include "../ChickenBMilk.h"

LinkedList<Product*> ChickenButterMilk::recipe;

void ChickenButterMilk::initRecipe(){
  recipe.add(new ChickenMeat());
  recipe.add(new CowMilk());
}

ChickenButterMilk::ChickenButterMilk() : SideProduct(110000,"Chicken Butter Milk"){
}

LinkedList<Product*> ChickenButterMilk::getRecipe(){
  return recipe;
}

bool ChickenButterMilk::validateRecipe(LinkedList<Product*> inventory){
  bool val = false;

  LinkedList<Product*> temp = inventory;
  LinkedList<Product*> tempRecipe = ChickenButterMilk::recipe;

  int i = 0;
  while((temp.length() >= tempRecipe.length()) && i <tempRecipe.length()){
    int del;
    del = temp.findPointer(tempRecipe.get(i));
    if (del != -1){
      temp.remove(tempRecipe.get(i));
      tempRecipe.remove(tempRecipe.get(i));
    }
    else{i++;}
    }

  if(tempRecipe.isEmpty()){
    val = true;
  }
  return val;
}
