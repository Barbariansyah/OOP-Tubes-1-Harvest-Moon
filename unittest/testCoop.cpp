#include "CUnit/Basic.h"
#include "../Coop.h"

//COMPILE:
//Coop.cpp Land.cpp Cell.cpp Renderable.cpp

void testCoop() {
  
  // Check if first param matches with second[2]
  Coop c1;
  Coop c2;
  Coop c3;

  CU_ASSERT_EQUAL(c1.getType(), "Coop");
  CU_ASSERT_EQUAL(c2.getType(), "Coop");
  CU_ASSERT_EQUAL(c3.getType(), "Coop");
  CU_ASSERT_EQUAL(c1.getType(), "Grassland");
  CU_ASSERT_EQUAL(c2.getType(), "Barn");

  c1.GrowGrass();
  c2.GrowGrass();

  CU_ASSERT_EQUAL(c1.Render(), YELLOW+"*"+NONE);
  CU_ASSERT_EQUAL(c1.Render(), YELLOW+"O"+NONE);
  CU_ASSERT_EQUAL(c2.Render(), YELLOW+"*"+NONE);
  CU_ASSERT_EQUAL(c2.Render(), YELLOW+"O"+NONE);

  c2.RemoveGrass();
  CU_ASSERT_EQUAL(c2.Render(), YELLOW+"*"+NONE);
  CU_ASSERT_EQUAL(c2.Render(), YELLOW+"O"+NONE);

  
  CU_ASSERT_EQUAL(c3.Render(), YELLOW+"*"+NONE);
  CU_ASSERT_EQUAL(c3.Render(), YELLOW+"O"+NONE);

}

int main() {
    // Initialize the CUnit test registry
    if (CUE_SUCCESS != CU_initialize_registry())
      return CU_get_error();

    // Sets the basic run mode, CU_BRM_VERBOSE will show maximum output of run details
    // Other choices are: CU_BRM_SILENT and CU_BRM_NORMAL
    CU_basic_set_mode(CU_BRM_VERBOSE);

    CU_pSuite pSuite = NULL;

    // Add a suite to the registry
    pSuite = CU_add_suite("testCoopSuite", 0, 0);

    // Always check if add was successful
    if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "testGrassland", testCoop)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Run the tests and show the run summary
    CU_basic_run_tests();
    return CU_get_error();
}
