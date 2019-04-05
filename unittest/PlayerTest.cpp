#include <iostream>
#include "CUnit/Basic.h"
#include "../All.h"
#include "../Game.h"

void DefaultCtor_Player_test(){
    Player p;
    CU_ASSERT_EQUAL("Player", p.GetName());
    CU_ASSERT_EQUAL(0, p.GetWaterContainer());
    CU_ASSERT_EQUAL(0, p.GetMoney());
    CU_ASSERT_EQUAL(0, p.GetX());
    CU_ASSERT_EQUAL(0, p.GetY());
    CU_ASSERT_EQUAL(0, p.GetInventory().length());
}

void ParamsCtor_Player_test(){
    Player p("Tes Nama",5,3.5,5,5);
    CU_ASSERT_EQUAL("Tes Nama", p.GetName());
    CU_ASSERT_EQUAL(5, p.GetWaterContainer());
    CU_ASSERT_EQUAL(3.5, p.GetMoney());
    CU_ASSERT_EQUAL(5, p.GetX());
    CU_ASSERT_EQUAL(5, p.GetY());
    CU_ASSERT_EQUAL(0, p.GetInventory().length());
}

void ParamsCtor_Player_test(){
    Player p("Tes Nama",5,3.5,5,5);
    CU_ASSERT_EQUAL("Tes Nama", p.GetName());
    CU_ASSERT_EQUAL(5, p.GetWaterContainer());
    CU_ASSERT_EQUAL(3.5, p.GetMoney());
    CU_ASSERT_EQUAL(5, p.GetX());
    CU_ASSERT_EQUAL(5, p.GetY());
    CU_ASSERT_EQUAL(0, p.GetInventory().length());
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
    pSuite = CU_add_suite("Player_Test", 0, 0);
    // Always check if add was successful
    if (NULL == pSuite) {
      CU_cleanup_registry();
       return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "Default Ctor Player Test", DefaultCtor_Player_test)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "Parameterized Ctor Player Test", ParamsCtor_Player_test)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    CU_basic_run_tests();
}