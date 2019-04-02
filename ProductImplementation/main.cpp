#include "../Product.h"
#include "../FarmProduct.h"
#include "../ChickenEgg.h"
#include "../SideProduct.h"
#include "../CowMeat.h"
#include "../BeefRolade.h"

int main(){
  FarmProduct A(100,"tes");
  FarmProduct B(100,"tesr");

  SideProduct *C = new SideProduct(100, "ding");
  SideProduct *D = new SideProduct(100, "ding");

  //SideProduct D(100, "dong");

  ChickenEgg E;
  ChickenEgg F;

  BeefRolade::initRecipe();
  BeefRolade G;

  LinkedList<Product*> test;
  test.add(new ChickenEgg());
  test.add(new ChickenEgg());
  test.add(new ChickenEgg());
  test.add(new ChickenEgg());
  test.add(new CowMeat());




  //cout<<(C==D)<<endl;
    cout<<(E==F)<<endl;
   cout<<G.validateRecipe(test)<<endl;


}
