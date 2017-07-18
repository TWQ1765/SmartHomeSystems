#include "unity.h"
#include <stdio.h>

#include "SmartHome.h"
#include "mock_getgpscoordinate.h"

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

void test_GPScoordinate_given_x_y_expect_h(void){
  

  TEST_ASSERT_EQUAL(0, getGPScoordinate(GPScoordinate *gps);        //  ex1
  TEST_ASSERT_EQUAL(0, getGPScoordinate(GPScoordinate *gps);     //  ex2
  TEST_ASSERT_EQUAL(0, getGPScoordinate(GPScoordinate *gps);  //  ex3
}
*/
///*
void test_findhouselocation_expect(void){
  GPScoordinate gps;
  gps.x = 300;
  gps.y = 300;
  float rangehouse;
  findhouselocation();
 // getGpsCoordinate_ExpectAndReturn(gps);
  //turn_Expect(KITCHEN_LIGHT, ON);
  TEST_ASSERT_EQUAL_FLOAT(1, rangehouse); 
  
}
//*/
	