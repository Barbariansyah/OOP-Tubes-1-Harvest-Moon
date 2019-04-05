#include <iostream>
#include "CUnit/Basic.h"
#include "AllProduct.h"

void ChickenEgg_test(){
    ChickenEgg test;
    CU_ASSERT_EQUAL("Chicken Egg", test.getName());
    CU_ASSERT_EQUAL(2000, test.getPrice());
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

    CU_basic_run_tests();
}

void testCoop() {
  
  // Check if first param matches with second[2]
  Coop c1;
  Coop c2;
  Coop c3;

  CU_ASSERT_EQUAL(c1.getType(), "Grassland");
  CU_ASSERT_EQUAL(c2.getType(), "Grassland");
  CU_ASSERT_EQUAL(c3.getType(), "Grassland");
  CU_ASSERT_EQUAL(c1.getType(), "Coop");
  CU_ASSERT_EQUAL(c2.getType(), "Barn");

  c1.GrowGrass();
  c2.GrowGrass();

  CU_ASSERT_EQUAL(c1.Render(), "-");
  CU_ASSERT_EQUAL(c1.Render(), "#");
  CU_ASSERT_EQUAL(c2.Render(), "-");
  CU_ASSERT_EQUAL(c2.Render(), "#");

  c2.RemoveGrass();
  CU_ASSERT_EQUAL(c2.Render(), "-");
  CU_ASSERT_EQUAL(c2.Render(), "#");

  
  CU_ASSERT_EQUAL(c3.Render(), "-");
  CU_ASSERT_EQUAL(c3.Render(), "#");

}