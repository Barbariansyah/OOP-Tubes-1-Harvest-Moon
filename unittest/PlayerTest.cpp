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

void SetName_Player_test(){
    Player p("Tes Nama",5,3.5,9,2);
    CU_ASSERT_EQUAL("Tes Nama", p.GetName());
    p.SetName("Ubah123");
    CU_ASSERT_EQUAL("Ubah123", p.GetName());
}

void Render_Player_test(){
    Player p;
    CU_ASSERT_EQUAL("P", p.Render());
}

void SetWaterContainer_Player_test(){
    Player p("Tes Nama",2,3.5,9,2);
    CU_ASSERT_EQUAL(2, p.GetWaterContainer());
    p.SetWaterContainer(4);
    CU_ASSERT_EQUAL("Tes Nama", p.GetName());
    CU_ASSERT_EQUAL(4, p.GetWaterContainer());
}

void SetWaterContainer_Overflow_Player_test(){
    Player p("Tes Nama",2,3.5,9,2);
    CU_ASSERT_EQUAL(2, p.GetWaterContainer());
    p.SetWaterContainer(8);
    CU_ASSERT_EQUAL("Tes Nama", p.GetName());
    CU_ASSERT_EQUAL(5, p.GetWaterContainer());
}

//TODO: Add test untuk interaksi dengan world

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

    if (NULL == CU_add_test(pSuite, "Player Name Setter Test", SetName_Player_test)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "Player Render Test", Render_Player_test)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "Player Water Container Setter Test", SetWaterContainer_Player_test)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "Player Water Container Setter Overcapacity Test", SetWaterContainer_Overflow_Player_test)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    CU_basic_run_tests();
}