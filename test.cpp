#include <iostream>
#include "CUnit/Basic.h"
#include "AllProduct.h"

void Pancake_test(){
    LinkedList<Product*> inventory;


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
    pSuite = CU_add_suite("Side_Product_Test", 0, 0);
    // Always check if add was successful
    if (NULL == pSuite) {
      CU_cleanup_registry();
       return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "Pancake_test", Pancake_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }


    CU_basic_run_tests();
}

