#include "../GoatCheese.h"

LinkedList<Product*> GoatCheese::recipe;

void GoatCheese::initRecipe(){
  recipe.add(new GoatMilk());
  recipe.add(new GoatMilk());
}

GoatCheese::GoatCheese():SideProduct(100000,"Goat Cheese"){
}

LinkedList<Product*> GoatCheese::getRecipe(){
  return recipe;
}

bool GoatCheese::validateRecipe(LinkedList<Product*> inventory){
  bool val = false;

  LinkedList<Product*> temp = inventory;
  LinkedList<Product*> tempRecipe = GoatCheese::recipe;

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
