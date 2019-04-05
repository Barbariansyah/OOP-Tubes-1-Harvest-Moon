#include "CUnit/Basic.h"
#include "../Grassland.h"

//COMPILE:
//Grassland.cpp Land.cpp Cell.cpp Renderable.cpp

void testGrassland() {
  
  // Check if first param matches with second[2]
  Grassland g1;
  Grassland g2;
  Grassland g3;

  CU_ASSERT_EQUAL(g1.getType(), "Grassland");
  CU_ASSERT_EQUAL(g2.getType(), "Grassland");
  CU_ASSERT_EQUAL(g3.getType(), "Grassland");

  g1.GrowGrass();
  g2.GrowGrass();

  CU_ASSERT_EQUAL(g1.Render(), GREEN+"#"+NONE);
  CU_ASSERT_EQUAL(g1.Render(), GREEN+"-"+NONE);
  CU_ASSERT_EQUAL(g2.Render(), GREEN+"#"+NONE);
  CU_ASSERT_EQUAL(g2.Render(), GREEN+"-"+NONE);

  g2.RemoveGrass();
  CU_ASSERT_EQUAL(g2.Render(), GREEN+"#"+NONE);
  CU_ASSERT_EQUAL(g2.Render(), GREEN+"-"+NONE);

  CU_ASSERT_EQUAL(g3.Render(), GREEN+"#"+NONE);
  CU_ASSERT_EQUAL(g3.Render(), GREEN+"-"+NONE);

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
    pSuite = CU_add_suite("testGrasslandSuite", 0, 0);

    // Always check if add was successful
    if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "testGrassland", testGrassland)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Run the tests and show the run summary
    CU_basic_run_tests();
    return CU_get_error();
}
