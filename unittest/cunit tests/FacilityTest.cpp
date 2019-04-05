#include "CUnit/Basic.h"
#include "../../Truck.h"
#include "../../Well.h"
#include "../../Mixer.h"

//COMPILE:
//Grassland.cpp Land.cpp Cell.cpp Renderable.cpp

void Truck_test() {
  // CHECK TRUCK
  Truck t(4,5);

  CU_ASSERT_EQUAL(t.GetX(), 4);
  CU_ASSERT_EQUAL(t.GetY(), 5);
  CU_ASSERT_EQUAL(t.getAwayCounter(), 0);
  CU_ASSERT_EQUAL(t.Render(), "T");

  t.SetAwayCounter(3);
  CU_ASSERT_EQUAL(t.getAwayCounter(), 3);

  t.TickTruck();
  CU_ASSERT_EQUAL(t.getAwayCounter(), 2);
}

void Well_test(){
  // CHECK TRUCK
  Well w(4,5);

  CU_ASSERT_EQUAL(w.GetX(), 4);
  CU_ASSERT_EQUAL(w.GetY(), 5);
  CU_ASSERT_EQUAL(w.Render(), "W");

}

void Mixer_test() {
  // CHECK TRUCK
  Mixer m(4,5);

  CU_ASSERT_EQUAL(m.GetX(), 4);
  CU_ASSERT_EQUAL(m.GetY(), 5);
  CU_ASSERT_EQUAL(m.Render(), "M");

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
    pSuite = CU_add_suite("testFacilitySuite", 0, 0);

    // Always check if add was successful
    if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "testTruck", Truck_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "testWell", Well_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "testMixer", Mixer_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Run the tests and show the run summary
    CU_basic_run_tests();
    return CU_get_error();
}
