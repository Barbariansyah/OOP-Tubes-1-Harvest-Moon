#include "CUnit/Basic.h"
#include "../Barn.h"
#include "../Coop.h"
#include "../Grassland.h"

//COMPILE:
//Grassland.cpp Land.cpp Cell.cpp Renderable.cpp

void testLand() {
  
  // CHECK BARN
  Barn b1;
  Barn b2;
  Barn b3;

  CU_ASSERT_EQUAL(b1.getType(), "Barn");
  CU_ASSERT_EQUAL(b2.getType(), "Barn");
  CU_ASSERT_EQUAL(b3.getType(), "Barn");
  CU_ASSERT_EQUAL(b1.getType(), "Grassland");
  CU_ASSERT_EQUAL(b2.getType(), "Coop");

  b1.GrowGrass();
  b2.GrowGrass();

  CU_ASSERT_EQUAL(b1.Render(), RED+"@"+NONE);
  CU_ASSERT_EQUAL(b1.Render(), RED+"X"+NONE);
  CU_ASSERT_EQUAL(b2.Render(), RED+"@"+NONE);
  CU_ASSERT_EQUAL(b2.Render(), RED+"X"+NONE);

  b2.RemoveGrass();
  CU_ASSERT_EQUAL(b2.Render(), RED+"@"+NONE);
  CU_ASSERT_EQUAL(b2.Render(), RED+"X"+NONE);

  CU_ASSERT_EQUAL(b3.Render(), RED+"@"+NONE);
  CU_ASSERT_EQUAL(b3.Render(), RED+"X"+NONE);


  //CHECK COOP
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

  // CHECK GRASSLAND
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
    pSuite = CU_add_suite("testLandSuite", 0, 0);

    // Always check if add was successful
    if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "testLand", testLand)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Run the tests and show the run summary
    CU_basic_run_tests();
    return CU_get_error();
}
