#include "SmartHome.h"
#include <math.h>
#include "getgpscoordinate.h"

//struct coor coor{
GPScoordinate house         = { 200 , 5345 }; 
GPScoordinate outsideGarage = { 200 , 5300 };
GPScoordinate garage        = { 215 , 5300 };
GPScoordinate kitchen       = { 196 , 5400 };

  
float findhouselocation(GPScoordinate gps,GPScoordinate house )
{
  float rangehouse;
  rangehouse = sqrt(square(gps.x-house.x)+square(gps.y-house.y));
  return rangehouse;
} 
float findoutsideGaragelocation(GPScoordinate gps,GPScoordinate outsideGarage )
{
  float rangeoutsideGarage;	
  rangeoutsideGarage = sqrt(square(gps.x-outsideGarage.x)+square(gps.y-outsideGarage.y));
  return rangeoutsideGarage;
} 
float findgaragelocation(GPScoordinate gps,GPScoordinate garage  )
{
  float rangegarage;	
  rangegarage = sqrt(square(gps.x-garage .x)+square(gps.y-garage .y));
  return rangegarage;
} 
float findkitchenlocation(GPScoordinate gps,GPScoordinate kitchen )
{
  float rangekitchen;	
  rangekitchen = sqrt(square(gps.x-kitchen.x)+square(gps.y-kitchen.y));
  return rangekitchen;
} 
//
void doSmartThing(){
	
 // GpsCoordinate gps = getGpsCoordinate();
 
  ///*
  if (findkitchenlocation <= 2)
  {
    turn(KITCHEN_LIGHT, ON);
  }
  else if (findgaragelocation < 1)
  {
    turn(GARAGE_DOOR, OFF);
  }
  else if (findoutsideGaragelocation < 5)
  {
    turn(GARAGE_DOOR, ON);
  }
  else if (findhouselocation < 2000)
  {
    turn(AIRCOND, ON);
    turn(WATER_HEATER, ON);
  }
 
  else
  {
    turn(GARAGE_DOOR, OFF);
    turn(KITCHEN_LIGHT, OFF);
    turn(AIRCOND, OFF);
    turn(WATER_HEATER, OFF);
  }
  
  //*/
}
//
//function for square
float square (float a){
  return a*a;
}


