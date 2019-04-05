#include "CUnit/Basic.h"
#include "../../Barn.h"
#include "../../Coop.h"
#include "../../Grassland.h"

//COMPILE:
//Grassland.cpp Land.cpp Cell.cpp Renderable.cpp

void Barn_test() {

  string GREEN = "\033[92m";
  string BLUE = "\033[94m";
  string RED = "\033[91m";
  string BOLD = "\033[1m";
  string NONE = "\033[0m";
  string YELLOW = "\033[93m";
  
  // CHECK BARN
  Barn b1;
  Barn b2;

  string cb1 = RED+"@"+NONE;
  string cb2 = RED+"X"+NONE;

  CU_ASSERT_EQUAL(b1.getType(), "Barn");
  CU_ASSERT_EQUAL(b2.getType(), "Barn");

  b1.GrowGrass();

  CU_ASSERT_EQUAL(b1.Render(), cb1);
  CU_ASSERT_EQUAL(b2.Render(), cb2);

  b2.RemoveGrass();
  CU_ASSERT_EQUAL(b2.Render(), cb2);
}

void Coop_test(){
  string GREEN = "\033[92m";
  string BLUE = "\033[94m";
  string RED = "\033[91m";
  string BOLD = "\033[1m";
  string NONE = "\033[0m";
  string YELLOW = "\033[93m";
  //CHECK COOP
  Coop c1;
  Coop c2;

  string cc1 = YELLOW+"*"+NONE;
  string cc2 = YELLOW+"O"+NONE;

  CU_ASSERT_EQUAL(c1.getType(), "Coop");
  CU_ASSERT_EQUAL(c2.getType(), "Coop");

  c1.GrowGrass();

  CU_ASSERT_EQUAL(c1.Render(), cc1);
  CU_ASSERT_EQUAL(c2.Render(), cc2);

  c2.RemoveGrass();
  CU_ASSERT_EQUAL(c2.Render(), cc2);

}

void Grassland_test() {
  string GREEN = "\033[92m";
  string BLUE = "\033[94m";
  string RED = "\033[91m";
  string BOLD = "\033[1m";
  string NONE = "\033[0m";
  string YELLOW = "\033[93m";
  // CHECK GRASSLAND
  Grassland g1;
  Grassland g2;

  string cg1 = GREEN+"#"+NONE;
  string cg2 = GREEN+"-"+NONE;

  CU_ASSERT_EQUAL(g1.getType(), "Grassland");
  CU_ASSERT_EQUAL(g2.getType(), "Grassland");

  g1.GrowGrass();

  CU_ASSERT_EQUAL(g1.Render(), cg1);
  CU_ASSERT_EQUAL(g2.Render(), cg2);

  g1.RemoveGrass();
  CU_ASSERT_EQUAL(g1.Render(), cg2);

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
    if (NULL == CU_add_test(pSuite, "testBarn", Barn_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "testCoop", Coop_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "testGrassland", Grassland_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Run the tests and show the run summary
    CU_basic_run_tests();
    return CU_get_error();
}
