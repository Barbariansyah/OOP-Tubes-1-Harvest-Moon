#include <iostream>
using namespace std;
#include "CUnit/Basic.h"
#include "../../AllAnimal.h"

void Chicken_test()
    {
        Chicken test(3,5);
        CU_ASSERT_EQUAL("C",test.Render());
        CU_ASSERT_EQUAL(5,test.GetHungerCountdown());
        CU_ASSERT_EQUAL(3,test.GetX());
        CU_ASSERT_EQUAL(5,test.GetY());
    }

void Cow_test()
    {
        Cow test(3,5);
        CU_ASSERT_EQUAL("S",test.Render());
        CU_ASSERT_EQUAL(5,test.GetHungerCountdown());
        CU_ASSERT_EQUAL(3,test.GetX());
        CU_ASSERT_EQUAL(5,test.GetY());
    }

void Dino_test()
    {
        Dino test(3,5);
        CU_ASSERT_EQUAL("U",test.Render());
        CU_ASSERT_EQUAL(5,test.GetHungerCountdown());
        CU_ASSERT_EQUAL(3,test.GetX());
        CU_ASSERT_EQUAL(5,test.GetY());      
    }

void Duck_test()
    {
        Duck test(3,5);
        CU_ASSERT_EQUAL("D",test.Render());
        CU_ASSERT_EQUAL(5,test.GetHungerCountdown());
        CU_ASSERT_EQUAL(3,test.GetX());
        CU_ASSERT_EQUAL(5,test.GetY()); 
    }

void Goat_test()
    {
        Goat test(3,5);
        CU_ASSERT_EQUAL("G",test.Render());
        CU_ASSERT_EQUAL(5,test.GetHungerCountdown());
        CU_ASSERT_EQUAL(3,test.GetX());
        CU_ASSERT_EQUAL(5,test.GetY());
    }

void Rabbit_test()
    {
        Rabbit test(3,5);
        CU_ASSERT_EQUAL("R",test.Render());
        CU_ASSERT_EQUAL(5,test.GetHungerCountdown());
        CU_ASSERT_EQUAL(3,test.GetX());
        CU_ASSERT_EQUAL(5,test.GetY());
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
    pSuite = CU_add_suite("Animal_Test", 0, 0);
    // Always check if add was successful
    if (NULL == pSuite) {
      CU_cleanup_registry();
       return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "Chicken_test", Chicken_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "Cow_test", Cow_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "Dino_test", Dino_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "Duck_test", Duck_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "Goat_test", Goat_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "Rabbit_test", Rabbit_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    CU_basic_run_tests();
}
