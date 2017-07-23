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

/*test ignore
void test_smarthome_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement smarthome");
}
*/
///*test kitchen
void test_SmartHome_expect_KITCHEN_LIGHT_ON(void){
  GPScoordinate gps;
  gps.x = 196;
  gps.y = 5400;

  getGPScoordinate_ExpectAndReturn(gps);
  turn_Expect(KITCHEN_LIGHT, ON);
  doSmartThing();  
}

///*test outsideGarage
void test_SmartHome_expect_GARAGE_DOOR_ON(void){
  GPScoordinate gps;
  gps.x = 200;
  gps.y = 5300;

  getGPScoordinate_ExpectAndReturn(gps);
  turn_Expect(GARAGE_DOOR, ON);
  doSmartThing();  
}
///*test garage
void test_SmartHome_expect_GARAGE_DOOR_OFF(void){
  GPScoordinate gps;
  gps.x = 215;
  gps.y = 5300;

  getGPScoordinate_ExpectAndReturn(gps);
  turn_Expect(GARAGE_DOOR, OFF);
  doSmartThing();  
}
//*/
///*test house
void test_SmartHome_expect_AIRCOND_WATER_HEATER_ON(void){
  GPScoordinate gps;
  gps.x = 200;
  gps.y = 5345;

  getGPScoordinate_ExpectAndReturn(gps);
  turn_Expect(AIRCOND, ON);
  turn_Expect(WATER_HEATER, ON);
  doSmartThing();  
}
//*/
///*//test function findhouselocation()
void test_findhouselocation_expect_house_y(void){
  GPScoordinate gps;
  gps.x = 200;
  gps.y = 2;
  GPScoordinate house ; 
  house.x= 200;
  house.y= 5345;

  float rangehouse=findhouselocation( gps, &house );
  TEST_ASSERT_EQUAL_FLOAT(1,rangehouse);
}
//*/
//*test square
void test_square_given_neg_7_point_1_expect_50_point_41(void){
  float result;
  result = square(-7.1);
  TEST_ASSERT_EQUAL_FLOAT(1,result); 
}
//*/	