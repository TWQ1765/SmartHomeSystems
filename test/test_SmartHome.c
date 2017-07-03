#include "unity.h"
#include <stdio.h>
#include "SmartHome.h"
#include "mock_SmartHome.c"

void setUp(void)
{
}

void tearDown(void)
{
}

/*
void test_smarthome_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement smarthome");
}
*/

/*
* test square root[x^2+y^2] = h
* h can not be neg value
* h = Hypotenuse
*/
void test_GPScoordinate_given_x_y_expect_h(void){
  

  TEST_ASSERT_EQUAL(0, location(&coorhouse_x,&coorhouse_y));        //  ex1
  TEST_ASSERT_EQUAL(0, location(&coorgarage_x,&coorgarage_y));     //  ex2
  TEST_ASSERT_EQUAL(0, location(&coorkitchen_x,&coorkitchen_y));  //  ex3
}

//void test_