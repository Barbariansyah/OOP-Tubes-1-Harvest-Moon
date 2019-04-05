#include <iostream>
#include "CUnit/Basic.h"
#include "../../AllProduct.h"




void Pancake_test(){
    LinkedList<Product*> inventoryTest;
    inventoryTest.add(new CowMilk());
    inventoryTest.add(new ChickenEgg());

    CU_ASSERT_EQUAL(1, Pancake::validateRecipe(inventoryTest));

}

void Pancake_fail_test(){
    LinkedList<Product*> inventoryTest2;
    inventoryTest2.add(new CowMilk());
    inventoryTest2.add(new GoatMilk());

    CU_ASSERT_EQUAL(0, Pancake::validateRecipe(inventoryTest2));

}

void Pancake_over_test(){
    LinkedList<Product*> inventoryTest3;
    inventoryTest3.add(new CowMilk());
    inventoryTest3.add(new ChickenEgg());
    inventoryTest3.add(new ChickenEgg());


    CU_ASSERT_EQUAL(1, Pancake::validateRecipe(inventoryTest3));

}

void BeefRolade_test(){
    LinkedList<Product*> inventoryTest;
    inventoryTest.add(new CowMeat());
    inventoryTest.add(new ChickenEgg());


    CU_ASSERT_EQUAL(1, BeefRolade::validateRecipe(inventoryTest));
}

void BeefRolade_fail_test(){
    LinkedList<Product*> inventoryTest;
    inventoryTest.add(new CowMeat());
    inventoryTest.add(new CowMeat());


    CU_ASSERT_EQUAL(0, BeefRolade::validateRecipe(inventoryTest));
}

void BeefRolade_over_test(){
    LinkedList<Product*> inventoryTest;
    inventoryTest.add(new CowMeat());
    inventoryTest.add(new ChickenEgg());
    inventoryTest.add(new CowMilk());


    CU_ASSERT_EQUAL(1, BeefRolade::validateRecipe(inventoryTest));
}

void GoatCheese_test(){
    LinkedList<Product*> inventoryTest;
    inventoryTest.add(new GoatMilk());
    inventoryTest.add(new GoatMilk());


    CU_ASSERT_EQUAL(1, GoatCheese::validateRecipe(inventoryTest));
}

void GoatCheese_fail_test(){
    LinkedList<Product*> inventoryTest;
    inventoryTest.add(new GoatMilk());


    CU_ASSERT_EQUAL(0, GoatCheese::validateRecipe(inventoryTest));
}

void GoatCheese_over_test(){
    LinkedList<Product*> inventoryTest;
    inventoryTest.add(new GoatMilk());
    inventoryTest.add(new GoatMilk());
    inventoryTest.add(new GoatMilk());


    CU_ASSERT_EQUAL(1, GoatCheese::validateRecipe(inventoryTest));
}

void ChickenBMilk_test(){
    LinkedList<Product*> inventoryTest;
    inventoryTest.add(new ChickenMeat());
    inventoryTest.add(new CowMilk());


    CU_ASSERT_EQUAL(1, ChickenButterMilk::validateRecipe(inventoryTest));
}

void ChickenBMilk_fail_test(){
    LinkedList<Product*> inventoryTest;
    inventoryTest.add(new ChickenMeat());
    inventoryTest.add(new GoatMilk());


    CU_ASSERT_EQUAL(0, ChickenButterMilk::validateRecipe(inventoryTest));
}

void ChickenBMilk_over_test(){
    LinkedList<Product*> inventoryTest;
    inventoryTest.add(new ChickenMeat());
    inventoryTest.add(new ChickenMeat());
    inventoryTest.add(new CowMilk());


    CU_ASSERT_EQUAL(1, ChickenButterMilk::validateRecipe(inventoryTest));
}

int main(){
    Pancake::initRecipe();
    BeefRolade::initRecipe();
    GoatCheese::initRecipe();
    ChickenButterMilk::initRecipe();
    // Initialize the CUnit test registry
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();
    // Sets the basic run mode, CU_BRM_VERBOSE will show maximum output of run details
    CU_basic_set_mode(CU_BRM_VERBOSE);
    // Other choices are: CU_BRM_SILENT and CU_BRM_NORMAL

    CU_pSuite pSuite = NULL;
    // Add a suite to the registry
    pSuite = CU_add_suite("Side_Product_Test", 0, 0);
    // Always check if add was successful
    if (NULL == pSuite) {
      CU_cleanup_registry();
       return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "Pancake_test", Pancake_test)) {
      CU_cleanup_registry();
      return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "Pancake_fail_test", Pancake_fail_test)) {
      CU_cleanup_registry();
      return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "Pancake_over_test", Pancake_over_test)) {
      CU_cleanup_registry();
      return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "BeefRolade_test", BeefRolade_test)) {
      CU_cleanup_registry();
      return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "BeefRolade_fail_test", BeefRolade_fail_test)) {
      CU_cleanup_registry();
      return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "BeefRolade_over_test", BeefRolade_over_test)) {
      CU_cleanup_registry();
      return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "GoatCheese_test", GoatCheese_test)) {
      CU_cleanup_registry();
      return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "GoatCheese_fail_test", GoatCheese_fail_test)) {
      CU_cleanup_registry();
      return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "GoatCheese_over_test", GoatCheese_over_test)) {
      CU_cleanup_registry();
      return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "ChickenBMilk_test", ChickenBMilk_test)) {
      CU_cleanup_registry();
      return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "ChickenBMilk_fail_test", ChickenBMilk_fail_test)) {
      CU_cleanup_registry();
      return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "ChickenBMilk_over_test", ChickenBMilk_over_test)) {
      CU_cleanup_registry();
      return CU_get_error();
    }    

    CU_basic_run_tests();
}
