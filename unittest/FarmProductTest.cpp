#include <iostream>
#include "CUnit/Basic.h"
#include "AllProduct.h"

void ChickenEgg_test(){
    ChickenEgg test;
    CU_ASSERT_EQUAL("Chicken Egg", test.getName());
    CU_ASSERT_EQUAL(2000, test.getPrice());
}

void DuckEgg_test(){
    DuckEgg test;
    CU_ASSERT_EQUAL("Duck Egg", test.getName());
    CU_ASSERT_EQUAL(3000, test.getPrice());
}

void GoatMilk_test(){
    GoatMilk test;
    CU_ASSERT_EQUAL("Goat Milk", test.getName());
    CU_ASSERT_EQUAL(25000, test.getPrice());
}

void DuckMeat_test(){
    DuckMeat test;
    CU_ASSERT_EQUAL("Duck Meat", test.getName());
    CU_ASSERT_EQUAL(26000, test.getPrice());
}

void RabbitMeat_test(){
    RabbitMeat test;
    CU_ASSERT_EQUAL("Rabbit Meat", test.getName());
    CU_ASSERT_EQUAL(50000, test.getPrice());
}

void CowMeat_test(){
    CowMeat test;
    CU_ASSERT_EQUAL("Cow Meat", test.getName());
    CU_ASSERT_EQUAL(70000, test.getPrice());
}

void GoatMeat_test(){
    GoatMeat test;
    CU_ASSERT_EQUAL("Goat Meat", test.getName());
    CU_ASSERT_EQUAL(60000, test.getPrice());
}

void ChickenMeat_test(){
    ChickenMeat test;
    CU_ASSERT_EQUAL("Chicken Meat", test.getName());
    CU_ASSERT_EQUAL(40000, test.getPrice());
}

void CowMilk_test(){
    CowMilk test;
    CU_ASSERT_EQUAL("Cow Milk", test.getName());
    CU_ASSERT_EQUAL(27000, test.getPrice());
}

void DinoEgg_test(){
    DinoEgg test;
    CU_ASSERT_EQUAL("Dino Egg", test.getName());
    CU_ASSERT_EQUAL(500000, test.getPrice());
}


int main(){
    // Initialize the CUnit test registry
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();
    // Sets the basic run mode, CU_BRM_VERBOSE will show maximum output of run details
    // Other choices are: CU_BRM_SILENT and CU_BRM_NORMAL
    CU_basic_set_mode(CU_BRM_VERBOSE);

    CU_pSuite pSuite = NULL;
    // Add a suite to the registry
    pSuite = CU_add_suite("Farm_Product_Test", 0, 0);
    // Always check if add was successful
    if (NULL == pSuite) {
      CU_cleanup_registry();
       return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "ChickenEgg_test", ChickenEgg_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "DuckEgg_test", DuckEgg_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "GoatMilk_test", GoatMilk_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "DuckMeat_test", DuckMeat_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "RabbitMeat_test", RabbitMeat_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "CowMeat_test", CowMeat_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "GoatMeat_test", GoatMeat_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "ChickenMeat_test", ChickenMeat_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "CowMilk_test", CowMilk_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "DinoEgg_test", DinoEgg_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    CU_basic_run_tests();
}

